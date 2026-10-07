
undefined1
FUN_1004c2f50(long *param_1,undefined4 param_2,void *param_3,uint param_4,char param_5,char param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 local_48;
  int local_44;
  void *local_40;
  uint local_38;
  
  QMutex::lock();
  bVar9 = true;
  if ((param_6 == '\0') && ((char)param_1[6] == '\0')) {
    uVar10 = 0;
    goto LAB_1004c3206;
  }
  local_40 = (void *)0x0;
  local_48 = param_2;
  local_38 = param_4;
  iVar5 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
  local_44 = iVar5;
  if (param_4 != 0) {
    local_40 = operator_new__((ulong)param_4,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (local_40 == (void *)0x0) {
      uVar10 = 0;
      goto LAB_1004c3206;
    }
    _memcpy(local_40,param_3,(ulong)param_4);
  }
  plVar1 = param_1 + 7;
  puVar7 = (uint *)param_1[7];
  if (1 < *puVar7) {
    FUN_1004c3740(plVar1);
    puVar7 = (uint *)*plVar1;
  }
  puVar4 = *(uint **)(puVar7 + 4);
  puVar8 = (uint *)0x0;
  if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
LAB_1004c306e:
    puVar12 = puVar7 + 2;
  }
  else {
    do {
      while (puVar12 = puVar4, uVar11 = puVar12[6], iVar5 <= (int)uVar11) {
        puVar4 = *(uint **)(puVar12 + 2);
        puVar8 = puVar12;
        if (*(uint **)(puVar12 + 2) == (uint *)0x0) goto LAB_1004c3069;
      }
      puVar4 = *(uint **)(puVar12 + 4);
    } while (*(uint **)(puVar12 + 4) != (uint *)0x0);
    if (puVar8 == (uint *)0x0) goto LAB_1004c306e;
    uVar11 = puVar8[6];
    puVar12 = puVar8;
LAB_1004c3069:
    if (iVar5 < (int)uVar11) goto LAB_1004c306e;
  }
  if (1 < *puVar7) {
    FUN_1004c3740(plVar1);
    puVar7 = (uint *)*plVar1;
  }
  if (puVar7 + 2 == puVar12) {
    if (1 < *puVar7) {
      FUN_1004c3740(plVar1);
      puVar7 = (uint *)*plVar1;
    }
    puVar4 = *(uint **)(puVar7 + 4);
    puVar8 = (uint *)0x0;
    if (*(uint **)(puVar7 + 4) != (uint *)0x0) {
      do {
        while (puVar12 = puVar4, uVar11 = puVar12[6], -1 < (int)uVar11) {
          puVar4 = *(uint **)(puVar12 + 2);
          puVar8 = puVar12;
          if (*(uint **)(puVar12 + 2) == (uint *)0x0) goto LAB_1004c30fa;
        }
        puVar4 = *(uint **)(puVar12 + 4);
      } while (*(uint **)(puVar12 + 4) != (uint *)0x0);
      if (puVar8 != (uint *)0x0) {
        uVar11 = puVar8[6];
        puVar12 = puVar8;
LAB_1004c30fa:
        if ((int)uVar11 < 1) goto LAB_1004c3105;
      }
    }
    puVar12 = puVar7 + 2;
  }
LAB_1004c3105:
  if (1 < *puVar7) {
    FUN_1004c3740(plVar1);
    puVar7 = (uint *)*plVar1;
  }
  if (puVar7 + 2 == puVar12) {
    if (param_5 == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
      FUN_1004c37e0(param_1 + 5,&local_48);
    }
  }
  else {
    plVar2 = param_1 + 5;
    FUN_1004c37e0(plVar2,&local_48);
    lVar6 = FUN_1002a6010(*(undefined8 *)(puVar12 + 8));
    puVar7 = (uint *)*plVar2;
    if (1 < *puVar7) {
      FUN_1004c35a0(plVar2,puVar7[1]);
      puVar7 = (uint *)*plVar2;
    }
    *(undefined4 *)(lVar6 + 0xc) =
         *(undefined4 *)(*(long *)(puVar7 + (long)(int)puVar7[2] * 2 + 4) + 0x10);
    if (1 < *puVar7) {
      FUN_1004c35a0(plVar2,puVar7[1]);
      puVar7 = (uint *)*plVar2;
    }
    *(undefined4 *)(lVar6 + 8) = **(undefined4 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
    uVar3 = *(undefined8 *)(puVar12 + 8);
    FUN_1004c33b0(plVar1,puVar12);
    bVar9 = false;
    QMutex::unlock();
    uVar10 = 1;
    FUN_1004c07d0(param_1,uVar3,0);
  }
LAB_1004c3206:
  if (bVar9) {
    QMutex::unlock();
  }
  return uVar10;
}

