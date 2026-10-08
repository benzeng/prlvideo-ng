
byte FUN_100343e80(long param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  QArrayData *local_d8;
  int local_cc [33];
  ulong local_48 [2];
  ulong local_38 [3];
  
  cVar1 = FUN_1003439e0();
  if (cVar1 == '\0') {
    return 0;
  }
  lVar6 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) || (lVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) == 0)
      ) || (lVar6 = 0, *(long *)(param_1 + 0x18) == 0)) goto LAB_100344019;
  uVar4 = FUN_100370280();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100323d90(&local_d8,uVar7);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100323e20(uVar7);
  lVar5 = FUN_1003704b0(uVar4,&local_d8,uVar3);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      local_38[0] = CONCAT71(local_38[0]._1_7_,*(int *)local_d8 != 0);
      if (*(int *)local_d8 != 0) goto LAB_100343f5c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100343f5c:
  lVar6 = 0;
  if (lVar5 != 0) {
    local_e0 = 0xffffffffffffffff;
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    auVar11 = FUN_100325fd0(uVar7);
    local_e8 = CONCAT44((auVar11._12_4_ + 1) - auVar11._4_4_,(auVar11._8_4_ + 1) - auVar11._0_4_);
    local_38[0] = local_38[0] & 0xffffffffffffff00;
    local_48[0] = local_48[0] & 0xffffffffffffff00;
    FUN_10036e580(lVar5,&local_e8,local_38,local_48,&local_e0,1);
    lVar6 = lVar5;
    if ((char)local_48[0] != '\0' || (char)local_38[0] != '\0') {
      lVar5 = *(long *)(lVar5 + 0x28);
      if (((int)local_e0 == (*(int *)(lVar5 + 0x1c) + 1) - *(int *)(lVar5 + 0x14)) &&
         (local_e0._4_4_ == (*(int *)(lVar5 + 0x20) + 1) - *(int *)(lVar5 + 0x18))) {
        return 0;
      }
    }
  }
LAB_100344019:
  bVar10 = true;
  if (param_2 == 1) {
    local_cc[0] = 0;
    if (lVar6 == 0) {
      bVar10 = false;
    }
    else {
      local_48[0] = 0;
      local_48[1] = 0;
      local_cc[0x1d] = 0;
      local_cc[0x1e] = 0;
      local_cc[0x1f] = 0;
      local_cc[0x20] = 0;
      local_cc[0x19] = 0;
      local_cc[0x1a] = 0;
      local_cc[0x1b] = 0;
      local_cc[0x1c] = 0;
      local_cc[0x15] = 0;
      local_cc[0x16] = 0;
      local_cc[0x17] = 0;
      local_cc[0x18] = 0;
      local_cc[0x11] = 0;
      local_cc[0x12] = 0;
      local_cc[0x13] = 0;
      local_cc[0x14] = 0;
      local_cc[0xd] = 0;
      local_cc[0xe] = 0;
      local_cc[0xf] = 0;
      local_cc[0x10] = 0;
      local_cc[9] = 0;
      local_cc[10] = 0;
      local_cc[0xb] = 0;
      local_cc[0xc] = 0;
      local_cc[5] = 0;
      local_cc[6] = 0;
      local_cc[7] = 0;
      local_cc[8] = 0;
      local_cc[1] = 0;
      local_cc[2] = 0;
      local_cc[3] = 0;
      local_cc[4] = 0;
      local_38[0] = 0;
      local_38[1] = 0;
      QMetaObject::invokeMethod(lVar6,"scaleViewMode",0,local_cc,"PRL_SCALE_VIEW_MODE");
      bVar10 = local_cc[0] == 0;
    }
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar6 = FUN_100323e30(uVar7,0);
  bVar9 = bVar10;
  if (lVar6 != 0) {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar7 = FUN_100323e30(uVar7,0);
    cVar1 = FUN_10037a4f0(uVar7);
    bVar9 = false;
    if (cVar1 == '\0') {
      bVar9 = bVar10;
    }
  }
  uVar8 = _GetCurrentKeyModifiers();
  if ((uVar8 & 0x200) != 0) {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar7 = FUN_100323e00(uVar7);
    bVar2 = FUN_10031b620(uVar7,0,0);
    bVar9 = bVar9 ^ bVar2 ^ 1;
  }
  return bVar9 & 1;
}

