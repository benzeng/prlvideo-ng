
void FUN_10051a3c0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  undefined *local_38;
  
  QMutex::lock();
  bVar10 = true;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar6 = *(uint **)(param_1 + 0x10);
  if (1 < *puVar6) {
    FUN_10051b5e0(puVar1);
    puVar6 = (uint *)*puVar1;
  }
  puVar4 = *(uint **)(puVar6 + 4);
  puVar7 = (uint *)0x0;
  if (*(uint **)(puVar6 + 4) != (uint *)0x0) {
    do {
      while (puVar9 = puVar4, uVar8 = puVar9[6], param_3 <= uVar8) {
        puVar4 = *(uint **)(puVar9 + 2);
        puVar7 = puVar9;
        if (*(uint **)(puVar9 + 2) == (uint *)0x0) goto LAB_10051a469;
      }
      puVar4 = *(uint **)(puVar9 + 4);
    } while (*(uint **)(puVar9 + 4) != (uint *)0x0);
    if (puVar7 != (uint *)0x0) {
      uVar8 = puVar7[6];
      puVar9 = puVar7;
LAB_10051a469:
      if (uVar8 <= param_3) goto LAB_10051a475;
    }
  }
  puVar9 = puVar6 + 2;
LAB_10051a475:
  if (1 < *puVar6) {
    FUN_10051b5e0(puVar1);
    puVar6 = (uint *)*puVar1;
  }
  if (puVar9 == puVar6 + 2) {
    bVar10 = true;
  }
  else {
    plVar2 = *(long **)(puVar9 + 8);
    if (plVar2 == (long *)0x0) {
      FUN_10051b1b0(puVar9 + 10,param_2);
      lVar3 = *(long *)(puVar9 + 10);
      if (*(int *)(lVar3 + 0xc) == *(int *)(lVar3 + 8)) {
        FUN_10051b070(puVar1,puVar9);
      }
    }
    else {
      QMutex::lock();
      iVar5 = FUN_10051b1b0(plVar2 + 2,param_2);
      QMutex::unlock();
      bVar10 = false;
      QMutex::unlock();
      if (iVar5 != 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,2);
        local_38 = PTR_shared_null_100ba2188;
        FUN_10000c490(&local_38,param_2);
        FUN_10051ad10(param_1,&local_38,param_3);
        FUN_100037320(&local_38);
      }
    }
  }
  if (bVar10) {
    QMutex::unlock();
  }
  return;
}

