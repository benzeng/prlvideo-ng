
void FUN_1005e5460(long param_1,int param_2)

{
  undefined8 uVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  if (param_2 == 0) {
    uVar1 = FUN_1005ec990(param_1 + 0x38);
    local_30 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
    uVar1 = FUN_1005b8a40(uVar1,&local_30);
    FUN_1007469d0(uVar1,0);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_22 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_22) goto LAB_1005e54dd;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1005e54dd:
  CAbstractWizardPage::enterPage(param_1,param_2);
  return;
}

