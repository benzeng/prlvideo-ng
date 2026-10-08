
void FUN_1009df5f0(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  undefined4 uVar7;
  
  QString::toUtf8();
  iVar2 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009df644;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1009df644:
  pcVar4 = _malloc((ulong)(iVar2 + 1));
  if (pcVar4 == (char *)0x0) {
    FUN_100df99c0("","PasswordEncryption",0,"(!)Error: failed to allocate buffer");
    return;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  _strcpy(pcVar4,(char *)(local_48 + *(long *)(local_48 + 0x10)));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009df6cc;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1009df6cc:
  *(undefined4 *)(param_1 + 0x20) = 0;
  plVar1 = (long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar6 = plVar1;
  iVar3 = _SecKeychainFindGenericPassword
                    (0,0xf,PTR_s_ParallelsServer_10227e408,*(undefined4 *)(param_1 + 8),
                     *(undefined8 *)(param_1 + 0x10),param_1 + 0x20,plVar1,param_1);
  uVar7 = (undefined4)((ulong)plVar6 >> 0x20);
  *(int *)(param_1 + 0x24) = iVar3;
  if ((iVar3 != -0x62d4) && (iVar3 != 0)) {
    FUN_100df99c0("","PasswordEncryption",0,
                  "(!)Error: Can\'t find password entry in keychan. Result code = %d.",iVar3);
    iVar3 = *(int *)(param_1 + 0x24);
  }
  if (iVar3 == 0) {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      FUN_100df99c0("","PasswordEncryption",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "m_pPasswordBuffer","CPasswordEncryption.cpp",CONCAT44(uVar7,0x15e),"encode");
      lVar5 = *plVar1;
    }
    _SecKeychainItemFreeContent(0,lVar5);
    *(int *)(param_1 + 0x20) = iVar2;
    *(char **)(param_1 + 0x18) = pcVar4;
    FUN_1009df500(param_1);
  }
  else if (iVar3 == -0x62d4) {
    if (*plVar1 != 0) {
      FUN_100df99c0("","PasswordEncryption",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "!m_pPasswordBuffer","CPasswordEncryption.cpp",CONCAT44(uVar7,0x155),"encode");
    }
    *(int *)(param_1 + 0x20) = iVar2;
    *(char **)(param_1 + 0x18) = pcVar4;
    FUN_1009df390(param_1);
  }
  _free(pcVar4);
  return;
}

