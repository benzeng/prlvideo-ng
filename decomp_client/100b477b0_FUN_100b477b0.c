
undefined8 FUN_100b477b0(undefined8 *param_1)

{
  QString *pQVar1;
  undefined *puVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  uint *puVar9;
  undefined1 auVar10 [16];
  QTypedArrayData<unsigned_short> *pQStack_b0;
  QString local_98;
  QString QStack_90;
  QString local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined *local_78;
  undefined2 local_70;
  undefined4 local_6e;
  undefined2 local_6a;
  byte local_68;
  undefined1 local_67;
  undefined8 **local_58;
  undefined8 **local_50;
  undefined8 local_48;
  uint *local_40;
  uint *local_38;
  
  FUN_100b3d4e0();
  local_48 = 0;
  local_58 = &local_58;
  local_50 = &local_58;
  cVar3 = FUN_100b46a70(&local_58,0,0);
  puVar2 = PTR_shared_null_1021e1288;
  if (cVar3 == '\0') {
    piVar4 = ___error();
    DAT_10231428c = *piVar4;
    uVar7 = 0x80004000;
    FUN_100df99c0("","prl_net",0,"[PrlNet]  makeEthIfacesList returned error: %d");
    goto LAB_100b479ee;
  }
  if ((undefined8 ***)local_50 != &local_58) {
    auVar10._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar10._0_8_ = PTR_shared_null_1021e1288;
    auVar10._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    pppuVar8 = (undefined8 ***)local_50;
    do {
      if (((ulong)pppuVar8[5] & 0x90000000) == 0x10000000) {
        pQStack_b0 = auVar10._8_8_;
        local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
        QStack_90.field0_0x0 = pQStack_b0;
        local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
        local_78 = puVar2;
        local_80 = 0xffffffff;
        local_7c = 0;
        local_70 = 0xffff;
        local_68 = 0;
        local_67 = 0;
        pQVar1 = (QString *)(pppuVar8 + 2);
        QString::operator=(&local_98,pQVar1);
        QString::operator=(&QStack_90,pQVar1);
        QString::operator=(&local_88,pQVar1);
        local_80 = *(undefined4 *)(pppuVar8 + 5);
        local_68 = *(byte *)(pppuVar8 + 3) & 1;
        local_7c = 1;
        local_70 = 0xffff;
        local_6a = *(undefined2 *)((long)pppuVar8 + 0x24);
        local_6e = *(undefined4 *)(pppuVar8 + 4);
        FUN_100b51230(pQVar1,&local_98,1);
        FUN_100b51230(pQVar1,&local_88,0);
        FUN_100b3d550(param_1,&local_98);
        FUN_100af8640(&local_98);
      }
      pppuVar8 = (undefined8 ***)pppuVar8[1];
    } while (pppuVar8 != &local_58);
  }
  puVar5 = (uint *)*param_1;
  uVar6 = puVar5[3];
  uVar7 = 0;
  if (uVar6 == puVar5[2]) goto LAB_100b479ee;
  if (*puVar5 < 2) {
    puVar9 = puVar5 + (long)(int)puVar5[2] * 2 + 4;
LAB_100b479c8:
    local_40 = puVar5 + (long)(int)uVar6 * 2 + 4;
  }
  else {
    FUN_100b467c0(param_1,puVar5[1]);
    puVar5 = (uint *)*param_1;
    puVar9 = puVar5 + (long)(int)puVar5[2] * 2 + 4;
    if (*puVar5 < 2) {
      uVar6 = puVar5[3];
      goto LAB_100b479c8;
    }
    FUN_100b467c0(param_1,puVar5[1]);
    puVar5 = (uint *)*param_1;
    local_40 = puVar5 + (long)(int)puVar5[3] * 2 + 4;
    if (1 < *puVar5) {
      FUN_100b467c0(param_1,puVar5[1]);
      puVar5 = (uint *)*param_1;
    }
  }
  local_38 = puVar9;
  FUN_100b492c0(&local_38,&local_40,*(undefined8 *)(puVar5 + (long)(int)puVar5[2] * 2 + 4));
LAB_100b479ee:
  FUN_100b3d5f0(&local_58);
  return uVar7;
}

