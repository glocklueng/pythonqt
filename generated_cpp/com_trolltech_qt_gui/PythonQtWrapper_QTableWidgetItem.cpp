#include "PythonQtWrapper_QTableWidgetItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qsize.h>
#include <qtablewidget.h>

QTableWidgetItem*  PythonQtShell_QTableWidgetItem::clone() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clone");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTableWidgetItem::staticMetaObject,
      "clone(QTableWidgetItem*)");
      QTableWidgetItem*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QTableWidgetItem* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTableWidgetItem::clone();
}
QVariant  PythonQtShell_QTableWidgetItem::data(int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTableWidgetItem::staticMetaObject,
      "data(QTableWidgetItem*,int )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTableWidgetItem::data(role);
}
bool  PythonQtShell_QTableWidgetItem::operator_less(const QTableWidgetItem&  other) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "operator_less");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTableWidgetItem::staticMetaObject,
      "operator_less(QTableWidgetItem*,const QTableWidgetItem& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&other};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTableWidgetItem::operator<(other);
}
void PythonQtShell_QTableWidgetItem::read(QDataStream&  in)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "read");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTableWidgetItem::staticMetaObject,
      "read(QTableWidgetItem*,QDataStream& )");
    void* args[2] = {NULL, (void*)&in};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTableWidgetItem::read(in);
}
void PythonQtShell_QTableWidgetItem::setData(int  role, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTableWidgetItem::staticMetaObject,
      "setData(QTableWidgetItem*,int ,const QVariant& )");
    void* args[3] = {NULL, (void*)&role, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTableWidgetItem::setData(role, value);
}
void PythonQtShell_QTableWidgetItem::write(QDataStream&  out) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "write");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTableWidgetItem::staticMetaObject,
      "write(QTableWidgetItem*,QDataStream& )");
    void* args[2] = {NULL, (void*)&out};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTableWidgetItem::write(out);
}
QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type)
{ 
return new PythonQtShell_QTableWidgetItem(icon, text, type); }

QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(const QString&  text, int  type)
{ 
return new PythonQtShell_QTableWidgetItem(text, type); }

QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(int  type)
{ 
return new PythonQtShell_QTableWidgetItem(type); }

void PythonQtWrapper_QTableWidgetItem::setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip)
{
 (*theWrappedObject).setStatusTip(statusTip);
}

void PythonQtWrapper_QTableWidgetItem::setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value)
{
 (*theWrappedObject).setData(role, value);
}

QBrush  PythonQtWrapper_QTableWidgetItem::foreground(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).foreground();
}

int  PythonQtWrapper_QTableWidgetItem::type(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).type();
}

void PythonQtWrapper_QTableWidgetItem::writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out)
{
out <<  (*theWrappedObject);
}

QSize  PythonQtWrapper_QTableWidgetItem::sizeHint(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).sizeHint();
}

void PythonQtWrapper_QTableWidgetItem::readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in)
{
in >>  (*theWrappedObject);
}

Qt::CheckState  PythonQtWrapper_QTableWidgetItem::checkState(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).checkState();
}

Qt::ItemFlags  PythonQtWrapper_QTableWidgetItem::flags(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).flags();
}

void PythonQtWrapper_QTableWidgetItem::setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size)
{
 (*theWrappedObject).setSizeHint(size);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidgetItem::clone(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).clone();
}

void PythonQtWrapper_QTableWidgetItem::setFont(QTableWidgetItem* theWrappedObject, const QFont&  font)
{
 (*theWrappedObject).setFont(font);
}

QBrush  PythonQtWrapper_QTableWidgetItem::background(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).background();
}

void PythonQtWrapper_QTableWidgetItem::setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip)
{
 (*theWrappedObject).setToolTip(toolTip);
}

void PythonQtWrapper_QTableWidgetItem::setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
 (*theWrappedObject).setFlags(flags);
}

void PythonQtWrapper_QTableWidgetItem::setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush)
{
 (*theWrappedObject).setForeground(brush);
}

void PythonQtWrapper_QTableWidgetItem::setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis)
{
 (*theWrappedObject).setWhatsThis(whatsThis);
}

QString  PythonQtWrapper_QTableWidgetItem::text(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).text();
}

int  PythonQtWrapper_QTableWidgetItem::column(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).column();
}

void PythonQtWrapper_QTableWidgetItem::setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush)
{
 (*theWrappedObject).setBackground(brush);
}

void PythonQtWrapper_QTableWidgetItem::setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state)
{
 (*theWrappedObject).setCheckState(state);
}

QVariant  PythonQtWrapper_QTableWidgetItem::data(QTableWidgetItem* theWrappedObject, int  role) const
{
return  (*theWrappedObject).data(role);
}

QIcon  PythonQtWrapper_QTableWidgetItem::icon(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).icon();
}

QString  PythonQtWrapper_QTableWidgetItem::statusTip(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).statusTip();
}

void PythonQtWrapper_QTableWidgetItem::setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment)
{
 (*theWrappedObject).setTextAlignment(alignment);
}

bool  PythonQtWrapper_QTableWidgetItem::isSelected(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).isSelected();
}

QTableWidget*  PythonQtWrapper_QTableWidgetItem::tableWidget(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).tableWidget();
}

QFont  PythonQtWrapper_QTableWidgetItem::font(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).font();
}

void PythonQtWrapper_QTableWidgetItem::setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon)
{
 (*theWrappedObject).setIcon(icon);
}

void PythonQtWrapper_QTableWidgetItem::setText(QTableWidgetItem* theWrappedObject, const QString&  text)
{
 (*theWrappedObject).setText(text);
}

QString  PythonQtWrapper_QTableWidgetItem::toolTip(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).toolTip();
}

void PythonQtWrapper_QTableWidgetItem::setSelected(QTableWidgetItem* theWrappedObject, bool  select)
{
 (*theWrappedObject).setSelected(select);
}

int  PythonQtWrapper_QTableWidgetItem::row(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).row();
}

int  PythonQtWrapper_QTableWidgetItem::textAlignment(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).textAlignment();
}

QString  PythonQtWrapper_QTableWidgetItem::whatsThis(QTableWidgetItem* theWrappedObject) const
{
return  (*theWrappedObject).whatsThis();
}

