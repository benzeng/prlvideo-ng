
undefined8 FUN_1006c2360(undefined8 *param_1)

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
  
  FUN_1006b3dd0();
  local_48 = 0;
  local_58 = &local_58;
  local_50 = &local_58;
  cVar3 = FUN_1006c1580(&local_58,0,0);
  puVar2 = PTR_shared_null_100ba20d0;
  if (cVar3 == '\0') {
    piVar4 = ___error();
    DAT_1011bd254 = *piVar4;
    uVar7 = 0x80004000;
    FUN_1008e3970("","prl_net",0,"[PrlNet]  makeEthIfacesList returned error: %d");
    goto LAB_1006c259e;
  }
  if ((undefined8 ***)local_50 != &local_58) {
    auVar10._8_4_ = (int)PTR_shared_null_100ba20d0;
    auVar10._0_8_ = PTR_shared_null_100ba20d0;
    auVar10._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
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
        FUN_1006cbde0(pQVar1,&local_98,1);
        FUN_1006cbde0(pQVar1,&local_88,0);
        FUN_10027a810(param_1,&local_98);
        FUN_10027a4b0(&local_98);
      }
      pppuVar8 = (undefined8 ***)pppuVar8[1];
    } while (pppuVar8 != &local_58);
  }
  puVar5 = (uint *)*param_1;
  uVar6 = puVar5[3];
  uVar7 = 0;
  if (uVar6 == puVar5[2]) goto LAB_1006c259e;
  if (*puVar5 < 2) {
    puVar9 = puVar5 + (long)(int)puVar5[2] * 2 + 4;
LAB_1006c2578:
    local_40 = puVar5 + (long)(int)uVar6 * 2 + 4;
  }
  else {
    FUN_10027ab40(param_1,puVar5[1]);
    puVar5 = (uint *)*param_1;
    puVar9 = puVar5 + (long)(int)puVar5[2] * 2 + 4;
    if (*puVar5 < 2) {
      uVar6 = puVar5[3];
      goto LAB_1006c2578;
    }
    FUN_10027ab40(param_1,puVar5[1]);
    puVar5 = (uint *)*param_1;
    local_40 = puVar5 + (long)(int)puVar5[3] * 2 + 4;
    if (1 < *puVar5) {
      FUN_10027ab40(param_1,puVar5[1]);
      puVar5 = (uint *)*param_1;
    }
  }
  local_38 = puVar9;
  FUN_1006c3e70(&local_38,&local_40,*(undefined8 *)(puVar5 + (long)(int)puVar5[2] * 2 + 4));
LAB_1006c259e:
  FUN_1006c1f60(&local_58);
  return uVar7;
}

