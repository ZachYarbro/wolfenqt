/****************************************************************************
**
** Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Qt Software Information (qt-info@nokia.com)
**
** This file is part of the Graphics Dojo project on Trolltech Labs.
**
** This file may be used under the terms of the GNU General Public
** License version 2.0 or 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of
** this file.  Please review the following information to ensure GNU
** General Public Licensing requirements will be met:
** http://www.fsf.org/licensing/licenses/info/GPLv2.html and
** http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at qt-sales@nokia.com.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#ifndef SCRIPTWIDGET_H
#define SCRIPTWIDGET_H

#include <QScriptEngine>
#include <QtGui>

class MazeScene;
class Entity;

class ScriptWidget : public QWidget
{
    Q_OBJECT
public:
    ScriptWidget(MazeScene *scene, Entity *entity);

public slots:
    void display(QScriptValue value);

private slots:
    void updateSource();
    void setPreset(int preset);

protected:
    void timerEvent(QTimerEvent *event);

private:
    MazeScene *m_scene;
    Entity *m_entity;
    QScriptEngine *m_engine;
    QPlainTextEdit *m_sourceEdit;
    QLineEdit *m_statusView;
    QString m_source;
    QTime m_time;
};

#endif
