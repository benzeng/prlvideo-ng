
void FUN_100666540(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CLicensePurchaseCompletedPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006665b0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006665b0:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_38,"CLicensePurchaseCompletedPage",
             "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:\'Lucida Grande\'; font-size:13pt; font-weight:400; font-style:normal;\">\n<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The charge(s) will appear on your credit card as &quot;www.cleverbridge.net.&quot;.</span></p>\n<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">You will be sent an email with your order details at the address provided.</span></p></body></html>"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100666611;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100666611:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_40,"CLicensePurchaseCompletedPage",
             "<span style=\" font-size:13pt;\">\n<table border=\"0\" width=\"100%\">\n<tr>\n<td width=\"50%\" align=\"right\"style=\"padding-right:4; padding-bottom:4;\">Date:</td>\n<td width=\"50%\" align=\"left\" style=\"padding-left:4;\"><b><span style=\"color:rgb( 255, 255, 255 );\">%1</span></b></td>\n</tr>\n<tr>\n<td width=\"50%\" align=\"right\" style=\"padding-right:4; padding-bottom:4;\">Number:</td>\n<td width=\"50%\" align=\"left\" style=\"padding-left:4;\"><b><span style=\"color:rgb( 255, 255, 255 );\">%2</span></b></td>\n</tr>\n<tr>\n<td width=\"50%\" align=\"right\" style=\"padding-right:4; padding-bottom:4;\">Total:</td>\n<td width=\"50%\" align=\"left\" style=\"padding-left:4;\"><b><span style=\"color:rgb( 255, 255, 255 );\">%3</span></b></td>\n</tr>\n<tr>\n<td colspan=\"2\" width=\"100%\" align=\"center\" style=\"padding-top:8;\" >Activation Key:  <span style=\"color:rgb( 255, 255, 255 );\">%4</span></td>\n</tr>\n</table>\n<span>\n"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100666672;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100666672:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_48,"CLicensePurchaseCompletedPage","Order Information",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006666d3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006666d3:
  puVar2 = PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x28));
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

