
long FUN_1000fe380(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  undefined *local_38;
  undefined1 local_29;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1000e6b10(param_1);
    puVar3 = (uint *)*param_1;
  }
  puVar2 = PTR_shared_null_1021e12f0;
  if (*(long *)(puVar3 + 4) != 0) {
    uVar1 = *param_2;
    lVar4 = *(long *)(puVar3 + 4);
    lVar5 = 0;
    do {
      while( true ) {
        lVar6 = lVar4;
        uVar7 = *(uint *)(lVar6 + 0x18);
        if (uVar7 != uVar1) break;
        uVar7 = uVar1;
        if (param_2[1] <= *(uint *)(lVar6 + 0x1c)) goto LAB_1000fe3e2;
LAB_1000fe3d2:
        lVar4 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          if (lVar5 == 0) goto LAB_1000fe401;
          uVar7 = *(uint *)(lVar5 + 0x18);
          lVar6 = lVar5;
          goto LAB_1000fe3f8;
        }
      }
      if (uVar7 < uVar1) goto LAB_1000fe3d2;
LAB_1000fe3e2:
      lVar4 = *(long *)(lVar6 + 8);
      lVar5 = lVar6;
    } while (*(long *)(lVar6 + 8) != 0);
LAB_1000fe3f8:
    bVar8 = uVar1 < uVar7;
    if (uVar1 == uVar7) {
      bVar8 = param_2[1] < *(uint *)(lVar6 + 0x1c);
    }
    if (!bVar8) {
      return lVar6 + 0x20;
    }
  }
LAB_1000fe401:
  local_38 = PTR_shared_null_1021e12f0;
  lVar4 = FUN_1000fefb0(param_1,param_2,&local_38);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return lVar4 + 0x20;
      }
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      FUN_1000e5b20();
      QMapDataBase::freeTree((QMapNodeBase *)puVar2,(int)*(undefined8 *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
  return lVar4 + 0x20;
}

