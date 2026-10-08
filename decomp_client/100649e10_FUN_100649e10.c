
void FUN_100649e10(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CActivationOfflinePage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100649e80;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100649e80:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_38,"CActivationOfflinePage",
             "<html><style>a { color: #aaddf0; }</style><body>To complete your activation, email your activation ID below to <a href=\"%1\">%2</a> or insert it into the web-page <a href=\"%3\">%4</a>.</body></html>"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100649ee1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100649ee1:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_40,"CActivationOfflinePage","Your ID:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100649f42;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100649f42:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_48,"CActivationOfflinePage","Copy ID",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100649fa3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100649fa3:
  pQVar1 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_50,"CActivationOfflinePage",
             "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:\'Lucida Grande\'; font-size:13pt; font-weight:400; font-style:normal;\">\n<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"
             ,0);
  QTextEdit::setHtml(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064a004;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10064a004:
  pQVar1 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate
            ((char *)&local_58,"CActivationOfflinePage",
             "<html><style>a { color: #aaddf0; }</style><body>You will receive a Confirmation Code. Paste it below to complete your activation.</body></html>"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064a068;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10064a068:
  pQVar1 = *(QString **)(param_1 + 0xb8);
  QCoreApplication::translate
            ((char *)&local_60,"CActivationOfflinePage",
             "%n day(s) left to complete your activation.",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064a0cc;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10064a0cc:
  pQVar1 = *(QString **)(param_1 + 0xc0);
  QCoreApplication::translate
            ((char *)&local_68,"CActivationOfflinePage",
             "%1 cannot connect to the Internet in order to complete your product activation.",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064a130;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10064a130:
  puVar2 = PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 200));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
  return;
}

