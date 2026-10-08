
void FUN_100146570(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate
            ((char *)&local_30,"CVmConvertProgressDialog","Parallels Desktop - Please wait...",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001465e0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001465e0:
  pQVar1 = *(QString **)(param_1 + 8);
  QCoreApplication::translate((char *)&local_38,"CVmConvertProgressDialog","Converting...",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100146641;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100146641:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_40,"CVmConvertProgressDialog",
             "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:\'Lucida Grande\'; font-size:11pt; font-weight:400; font-style:normal;\">\n<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For more information on upgrading your virtual machines, visit the upgrade page on the <a href=\"%1\"><span style=\" text-decoration: underline; color:#0000ff;\">Parallels website.</span></a></p></body></html>"
             ,0);
  QTextEdit::setHtml(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

