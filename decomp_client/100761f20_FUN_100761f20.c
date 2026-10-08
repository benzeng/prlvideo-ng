
void FUN_100761f20(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QCoreApplication::translate
            ((char *)&local_38,"CFreeDiskSpaceContentWidget","Free Up Disk Space",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100761f95;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100761f95:
  puVar2 = PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 8));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100761fdd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100761fdd:
  local_48 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x28));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076201e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10076201e:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_50,"CFreeDiskSpaceContentWidget","Snapshots",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076207f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10076207f:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate
            ((char *)&local_58,"CFreeDiskSpaceContentWidget",
             "Delete shanpshots available in multiple virtual machines",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007620e0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007620e0:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_60,"CFreeDiskSpaceContentWidget","Open Control Center",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100762141;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100762141:
  local_68 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x68));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100762182;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100762182:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_70,"CFreeDiskSpaceContentWidget","Resume & Shutdown",0)
  ;
  QLabel::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007621e6;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007621e6:
  pQVar1 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate
            ((char *)&local_78,"CFreeDiskSpaceContentWidget","Shut down suspended virtual machines",
             0);
  QLabel::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076224a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10076224a:
  pQVar1 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate
            ((char *)&local_80,"CFreeDiskSpaceContentWidget","Open Control Center",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007622ae;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007622ae:
  local_88 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0xa8));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007622f2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007622f2:
  pQVar1 = *(QString **)(param_1 + 0xc0);
  QCoreApplication::translate
            ((char *)&local_90,"CFreeDiskSpaceContentWidget","Reclaim Disk Space",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076235f;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10076235f:
  pQVar1 = *(QString **)(param_1 + 200);
  QCoreApplication::translate
            ((char *)&local_98,"CFreeDiskSpaceContentWidget","VM > Configure > Options.. > Reclaim",
             0);
  QLabel::setText(pQVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007623cc;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007623cc:
  pQVar1 = *(QString **)(param_1 + 0xd0);
  QCoreApplication::translate
            ((char *)&local_a0,"CFreeDiskSpaceContentWidget","Open Control Center",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100762439;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100762439:
  local_a8 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0xe8));
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100762489;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100762489:
  pQVar1 = *(QString **)(param_1 + 0x100);
  QCoreApplication::translate
            ((char *)&local_b0,"CFreeDiskSpaceContentWidget",
             "Clean up Parallels Desktop cache files",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007624f6;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1007624f6:
  local_b8 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x108));
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100762546;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100762546:
  pQVar1 = *(QString **)(param_1 + 0x110);
  QCoreApplication::translate((char *)&local_c0,"CFreeDiskSpaceContentWidget","Clean up",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007625b3;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1007625b3:
  local_c8 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x128));
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100762603;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100762603:
  pQVar1 = *(QString **)(param_1 + 0x140);
  QCoreApplication::translate((char *)&local_d0,"CFreeDiskSpaceContentWidget","Archive",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100762670;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100762670:
  pQVar1 = *(QString **)(param_1 + 0x148);
  QCoreApplication::translate
            ((char *)&local_d8,"CFreeDiskSpaceContentWidget",
             "Archived virtual machines take up to 60% less disk space",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007626dd;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1007626dd:
  pQVar1 = *(QString **)(param_1 + 0x150);
  QCoreApplication::translate
            ((char *)&local_e0,"CFreeDiskSpaceContentWidget","Open Control Center",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
  return;
}

