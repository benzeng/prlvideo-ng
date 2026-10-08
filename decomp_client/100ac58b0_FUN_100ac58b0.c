
undefined8 FUN_100ac58b0(long param_1,long param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  QArrayData *local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50;
  undefined7 uStack_4f;
  double local_48;
  double local_40;
  double local_38;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_4 == '\x01' && param_3 == '\0') {
    return 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  cVar3 = FUN_100d7c0a0();
  pcVar2 = DAT_102311b38;
  if (cVar3 == '\0') {
LAB_100ac590f:
    local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    uVar4 = (*DAT_1023119d8)();
    iVar5 = (*pcVar2)(uVar4,uVar1,&local_50);
    if (iVar5 != 0) goto LAB_100ac590f;
    local_60 = (int)(double)CONCAT71(uStack_4f,local_50);
    local_5c = (int)local_48;
    local_58 = local_60 + -1 + (int)local_40;
    local_54 = local_5c + -1 + (int)local_38;
    FUN_100d7bed0(&local_68,&local_60);
  }
  iVar5 = FUN_100d7b000(&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_50 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_50) goto LAB_100ac598d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100ac598d:
  iVar6 = FUN_100d7b300(*(undefined4 *)(param_2 + 0x48));
  cVar3 = *(char *)(*(long *)(param_1 + 0xa30) + 0x10);
  if ((iVar5 == iVar6) || (iVar6 == -1)) {
LAB_100ac59ea:
    if (cVar3 != '\0') goto LAB_100ac59f8;
  }
  else if ((cVar3 != '\0') || (*(char *)(param_1 + 0xaa6) != '\0')) {
    if ((*(char *)(param_1 + 0xaa9) == '\0') &&
       ((*(char *)(param_1 + 0xaa8) != '\0' || (*(char *)(param_1 + 0xaa7) != '\0')))) {
      uVar7 = CONCAT71((int7)((ulong)*(long *)(param_1 + 0xa30) >> 8),1);
      if (param_3 == '\0') {
        return uVar7;
      }
      if (*(char *)(param_2 + 0x56) == '\0') {
        return uVar7;
      }
    }
    goto LAB_100ac59ea;
  }
  if (*(char *)(param_1 + 0xaa6) == '\0') {
    return 0;
  }
LAB_100ac59f8:
  iVar5 = FUN_100d7ae30(iVar5);
  iVar6 = FUN_100d7ae30(iVar6);
  if ((iVar5 != iVar6) || (*(char *)(param_1 + 0xb88) != '\0')) {
    FUN_100ade620(*(undefined8 *)(param_1 + 0xa58),1);
    *(undefined1 *)(param_1 + 0xb88) = 0;
  }
  return 0;
}

