
undefined4 FUN_1004caac0(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  ulong uVar14;
  long local_48;
  uint local_40;
  undefined4 local_3c;
  long *local_38;
  
  if (*(short *)(param_2 + 0x16) != 1) {
    return 0xf0000003;
  }
  if (*(ushort *)(param_2 + 0x14) == 0) {
    return 0xf0000003;
  }
  if (*(ushort *)(param_2 + 0x14) < 0x10) {
    return 0xf0000009;
  }
  iVar2 = *(int *)(param_2 + 8);
  lVar8 = FUN_1002a6120(param_2,0,0);
  if (lVar8 == 0) {
    return 0xf0000003;
  }
  puVar9 = (undefined4 *)FUN_1002a6010(param_2);
  uVar3 = puVar9[3];
  uVar14 = (ulong)uVar3;
  if (*(uint *)(lVar8 + 8) < uVar3) {
    return 0xf0000003;
  }
  uVar4 = *(undefined8 *)(puVar9 + 1);
  FUN_1004cf180(&local_38,*param_1 + 0x48,*puVar9);
  if (local_38 == (long *)0x0) {
    return 0xf0000012;
  }
  iVar6 = (**(code **)(*local_38 + 0x18))();
  if ((iVar6 == 0) || (iVar6 = (**(code **)(*local_38 + 0x18))(), iVar6 == 1)) {
    uVar7 = 0xf000000f;
    if (*(char *)((long)local_38 + 0x29) != '\0') {
      bVar5 = true;
      goto LAB_1004cad0a;
    }
    puVar9 = (undefined4 *)FUN_1002a6010(param_2);
    *puVar9 = 0;
    lVar10 = QThreadStorageData::get();
    if (lVar10 == 0) {
      puVar11 = operator_new(0x18);
      puVar11[2] = 0;
      puVar11[1] = 0;
      QThreadStorageData::set(param_1 + 1);
    }
    else {
      puVar11 = (undefined8 *)QThreadStorageData::get();
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)QThreadStorageData::set(param_1 + 1);
      }
      puVar11 = (undefined8 *)*puVar11;
    }
    uVar12 = FUN_1007d87f0();
    *puVar11 = uVar12;
    pvVar13 = (void *)puVar11[1];
    if (pvVar13 == (void *)0x0) {
LAB_1004cac64:
      puVar11[2] = uVar14;
      pvVar13 = _valloc(uVar14);
      puVar11[1] = pvVar13;
      if (pvVar13 == (void *)0x0) {
        if (local_38 == (long *)0x0) {
          return 0xf0000004;
        }
        uVar7 = 0xf0000003;
        bVar5 = false;
        goto LAB_1004cad0a;
      }
    }
    else if ((long)puVar11[2] < (long)uVar14) {
      _free(pvVar13);
      goto LAB_1004cac64;
    }
    local_3c = 0;
    local_48 = lVar8;
    local_40 = uVar3;
    if (iVar2 == 0x209) {
      uVar7 = (**(code **)(*local_38 + 0x70))
                        (local_38,uVar14,uVar4,pvVar13,FUN_1004d4cd0,&local_48,puVar9);
    }
    else {
      uVar7 = (**(code **)(*local_38 + 0x68))
                        (local_38,uVar14,uVar4,pvVar13,FUN_1004d4cd0,&local_48,puVar9);
      *(undefined4 *)(lVar8 + 0x10) = *puVar9;
    }
  }
  else {
    uVar7 = 0xf0000010;
  }
  bVar5 = true;
LAB_1004cad0a:
  LOCK();
  plVar1 = local_38 + 1;
  lVar8 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (bVar5) {
    return uVar7;
  }
  return 0xf0000004;
}

