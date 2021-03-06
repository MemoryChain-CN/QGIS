/***************************************************************************
    qgsattributeformcontaineredit.h
    ---------------------
    begin                : February 2020
    copyright            : (C) 2020 Denis Rouzaud
    email                : denis@opengis.ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSATTRIBUTEFORMCONTAINEREDIT_H
#define QGSATTRIBUTEFORMCONTAINEREDIT_H

// We don't want to expose this in the public API
#define SIP_NO_FILE

#include <QWidget>

#include "ui_qgsattributeformcontaineredit.h"

#include "qgis_gui.h"

class QTreeWidgetItem;

/**
 * Widget to edit a container (tab or group box) of a form configuration
 * \since QGIS 3.14
 */
class GUI_EXPORT QgsAttributeFormContainerEdit: public QWidget, private Ui_QgsAttributeFormContainerEdit
{
    Q_OBJECT

  public:
    explicit QgsAttributeFormContainerEdit( QTreeWidgetItem *item, QWidget *parent = nullptr );


    void updateItemData();


  private:
    QTreeWidgetItem *mTreeItem;
};

#endif // QGSATTRIBUTEFORMCONTAINEREDIT_H
