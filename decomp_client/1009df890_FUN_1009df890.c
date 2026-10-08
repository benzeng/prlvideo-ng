
QString * FUN_1009df890(QString *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  long *plVar4;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  undefined4 uVar5;
  
  plVar1 = (long *)(param_2 + 0x18);
  plVar4 = plVar1;
  iVar2 = _SecKeychainFindGenericPassword
                    (0,0xf,PTR_s_ParallelsServer_10227e408,*(undefined4 *)(param_2 + 8),
                     *(undefined8 *)(param_2 + 0x10),(int *)(param_2 + 0x20),plVar1,param_2);
  uVar5 = (undefined4)((ulong)plVar4 >> 0x20);
  *(int *)(param_2 + 0x24) = iVar2;
  if ((iVar2 != -0x62d4) && (iVar2 != 0)) {
    FUN_100df99c0("","PasswordEncryption",0,
                  "(!)Error: Can\'t find password entry in keychan. Result code = %d.");
    iVar2 = *(int *)(param_2 + 0x24);
  }
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (iVar2 != 0) {
    return param_1;
  }
  pcVar3 = (char *)*plVar1;
  if (pcVar3 == (char *)0x0) {
    FUN_100df99c0("","PasswordEncryption",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPasswordBuffer"
                  ,"CPasswordEncryption.cpp",CONCAT44(uVar5,0x179),"decode");
    pcVar3 = (char *)*plVar1;
  }
  if ((pcVar3 != (char *)0x0) && (*(int *)(param_2 + 0x20) == -1)) {
    _strlen(pcVar3);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)pcVar3);
  QString::normalized(&local_38,&local_40,1,0);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009df9e0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1009df9e0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009dfa10;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009dfa10:
  _SecKeychainItemFreeContent(0,*plVar1);
  return param_1;
}

