
undefined1 FUN_1000f25e0(undefined8 param_1,long *param_2)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  size_t sVar4;
  char *pcVar5;
  undefined1 uVar6;
  long lVar7;
  QString local_98;
  QArrayData *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined **local_68 [2];
  undefined **local_58 [2];
  undefined **local_48 [2];
  undefined **local_38 [2];
  undefined1 local_21;
  
  FUN_100d72f10(local_38);
  local_38[0] = &PTR_FUN_10226cb40;
  FUN_100d72f10(local_48);
  local_48[0] = &PTR_FUN_10226cb78;
  FUN_100d72f10(local_58);
  local_58[0] = &PTR_FUN_10226cbf8;
  FUN_100d72f10(local_68);
  local_68[0] = &PTR_FUN_10226cc58;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (char *)0x0;
  QString::toUtf8();
  iVar1 = FUN_100d74c60(local_38,local_90 + *(long *)(local_90 + 0x10),0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000f26af;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1000f26af:
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_100df99c0("SGAC","prl_client_app",2,"LinkPlist::read() err %i",iVar1);
    }
    goto LAB_1000f2927;
  }
  iVar1 = FUN_100d74ec0(local_38,local_48);
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_100df99c0("SGAC","prl_client_app",2,"LinkPlist::getTarget() err %i",iVar1);
    }
    goto LAB_1000f2927;
  }
  iVar1 = FUN_100d74510(local_48,local_58);
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_100df99c0("SGAC","prl_client_app",2,"linkTarget.getObject() err %i",iVar1);
    }
    goto LAB_1000f2927;
  }
  iVar1 = FUN_100d73fd0(local_58,local_68);
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_100df99c0("SGAC","prl_client_app",2,"linkObject.getAction() err %i",iVar1);
    }
    goto LAB_1000f2927;
  }
  iVar1 = FUN_100d73d80(local_68);
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_100df99c0("SGAC","prl_client_app",2,"commandLineAction.getCommandLine() err %i",iVar1);
    }
    goto LAB_1000f2927;
  }
  pcVar2 = (char *)std::string::at((ulong)&local_88);
  if (*pcVar2 == '\"') {
    std::string::erase((ulong)&local_88,0);
    uVar3 = std::string::find((char)&local_88,0x22);
    if (uVar3 != 0xffffffffffffffff) {
      std::string::erase((ulong)&local_88,uVar3);
    }
  }
  lVar7 = 0;
  if (*param_2 != 0) {
    lVar7 = *(long *)(*param_2 + 0x10);
  }
  if ((local_88 & 1) == 0) {
    pcVar2 = (char *)((long)&local_88 + 1);
LAB_1000f28c5:
    sVar4 = _strlen(pcVar2);
    iVar1 = (int)sVar4;
    pcVar5 = pcVar2;
  }
  else {
    iVar1 = -1;
    pcVar5 = (char *)0x0;
    pcVar2 = local_78;
    if (local_78 != (char *)0x0) goto LAB_1000f28c5;
  }
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar5,iVar1);
  QString::operator=((QString *)(lVar7 + 0x10),&local_98);
  uVar6 = 1;
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_21 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000f2927;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1000f2927:
  std::string::~string((string *)&local_88);
  FUN_100d72f50(local_68);
  FUN_100d72f50(local_58);
  FUN_100d72f50(local_48);
  FUN_100d72f50(local_38);
  return uVar6;
}

