/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:09 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtDeclarative.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtDeclarative/qdeclarativeerror.sip"
#include <qdeclarativeerror.h>
#line 39 "sipQtDeclarativeQDeclarativeError.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtDeclarativeQDeclarativeError.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 46 "sipQtDeclarativeQDeclarativeError.cpp"


extern "C" {static PyObject *meth_QDeclarativeError_isValid(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeError, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_url(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeError, &sipCpp))
        {
            QUrl *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_url, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_setUrl(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_setUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl * a0;
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDeclarativeError, &sipCpp, sipType_QUrl, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUrl(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_setUrl, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_description(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeError, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->description());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_description, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_setDescription(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_setDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDeclarativeError, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDescription(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_setDescription, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_line(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_line(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeError, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->line();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_line, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_setLine(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_setLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDeclarativeError, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLine(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_setLine, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_column(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeError, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->column();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_column, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_setColumn(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_setColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDeclarativeError, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setColumn(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_setColumn, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeError_toString(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeError_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDeclarativeError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeError, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeError, sipName_toString, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDeclarativeError(void *, const sipTypeDef *);}
static void *cast_QDeclarativeError(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDeclarativeError)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativeError(void *, int);}
static void release_QDeclarativeError(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDeclarativeError *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDeclarativeError(void *, SIP_SSIZE_T, const void *);}
static void assign_QDeclarativeError(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDeclarativeError *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDeclarativeError *>(sipSrc);
}


extern "C" {static void *array_QDeclarativeError(SIP_SSIZE_T);}
static void *array_QDeclarativeError(SIP_SSIZE_T sipNrElem)
{
    return new QDeclarativeError[sipNrElem];
}


extern "C" {static void *copy_QDeclarativeError(const void *, SIP_SSIZE_T);}
static void *copy_QDeclarativeError(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDeclarativeError(reinterpret_cast<const QDeclarativeError *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDeclarativeError(sipSimpleWrapper *);}
static void dealloc_QDeclarativeError(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDeclarativeError(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QDeclarativeError(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDeclarativeError(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDeclarativeError *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDeclarativeError();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDeclarativeError * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDeclarativeError, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDeclarativeError(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDeclarativeError[] = {
    {SIP_MLNAME_CAST(sipName_column), meth_QDeclarativeError_column, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_description), meth_QDeclarativeError_description, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QDeclarativeError_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_line), meth_QDeclarativeError_line, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setColumn), meth_QDeclarativeError_setColumn, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDescription), meth_QDeclarativeError_setDescription, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setLine), meth_QDeclarativeError_setLine, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setUrl), meth_QDeclarativeError_setUrl, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toString), meth_QDeclarativeError_toString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_url), meth_QDeclarativeError_url, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtDeclarative_QDeclarativeError = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDeclarativeError,
        {0}
    },
    {
        sipNameNr_QDeclarativeError,
        {0, 0, 1},
        10, methods_QDeclarativeError,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QDeclarativeError,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QDeclarativeError,
    assign_QDeclarativeError,
    array_QDeclarativeError,
    copy_QDeclarativeError,
    release_QDeclarativeError,
    cast_QDeclarativeError,
    0,
    0,
    0
},
    0,
    0,
    0
};
