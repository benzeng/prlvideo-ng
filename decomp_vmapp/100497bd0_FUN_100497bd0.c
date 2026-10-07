
void FUN_100497bd0(long param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined1 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  bool bVar12;
  uint *puVar13;
  undefined8 ***local_70;
  undefined8 ***local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  uint local_50;
  undefined1 local_4c [4];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_70 = &local_70;
  local_60 = 0;
  uVar9 = 0;
  if (*param_3 != 0) {
    uVar9 = *(undefined8 *)(*param_3 + 0x10);
  }
  local_68 = local_70;
  local_38 = lVar10;
  cVar3 = FUN_100499150(uVar9,param_4,local_4c,&local_50,&local_54,&local_48,&local_58,local_70);
  if (cVar3 == '\0') goto LAB_100497efb;
  QMutex::lock();
  bVar12 = true;
  puVar1 = (undefined8 *)(param_1 + 0x78);
  puVar5 = *(uint **)(param_1 + 0x78);
  if (1 < *puVar5) {
    FUN_100498ef0(puVar1);
    puVar5 = (uint *)*puVar1;
  }
  if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
LAB_100497cdd:
    puVar13 = puVar5 + 2;
  }
  else {
    puVar2 = *(uint **)(puVar5 + 4);
    puVar11 = (uint *)0x0;
    do {
      while (puVar13 = puVar2, uVar4 = puVar13[6], local_50 <= uVar4) {
        puVar2 = *(uint **)(puVar13 + 2);
        puVar11 = puVar13;
        if (*(uint **)(puVar13 + 2) == (uint *)0x0) goto LAB_100497cd9;
      }
      puVar2 = *(uint **)(puVar13 + 4);
    } while (*(uint **)(puVar13 + 4) != (uint *)0x0);
    if (puVar11 == (uint *)0x0) goto LAB_100497cdd;
    uVar4 = puVar11[6];
    puVar13 = puVar11;
LAB_100497cd9:
    if (local_50 < uVar4) goto LAB_100497cdd;
  }
  if (1 < *puVar5) {
    FUN_100498ef0(puVar1);
    puVar5 = (uint *)*puVar1;
  }
  if (puVar13 != puVar5 + 2) {
    lVar10 = *(long *)(puVar13 + 8);
    FUN_1004989b0(puVar1,puVar13);
    bVar12 = false;
    QMutex::unlock();
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined4 *)(lVar6 + 0x18) = local_58;
    puVar7 = (undefined1 *)FUN_1002a6010(lVar10);
    *puVar7 = local_48;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 1) = local_47;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 2) = local_46;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 3) = local_45;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 4) = local_44;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 5) = local_43;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 6) = local_42;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 7) = local_41;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 8) = local_40;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 9) = local_3f;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 10) = local_3e;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 0xb) = local_3d;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 0xc) = local_3c;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 0xd) = local_3b;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 0xe) = local_3a;
    lVar6 = FUN_1002a6010(lVar10);
    *(undefined1 *)(lVar6 + 0xf) = local_39;
    if ((local_54 == 0) && ((*(uint *)(lVar10 + 8) & 0xfffffffe) == 0x8a00)) {
      uVar4 = FUN_1004995d0(&local_70);
      lVar6 = FUN_1002a6120(lVar10,0,1);
      if (*(uint *)(lVar6 + 8) < uVar4) {
        FUN_1004c07d0(param_1 + 0x40,lVar10,0xf0000009);
        goto LAB_100497ede;
      }
      pvVar8 = (void *)0x0;
      if (uVar4 != 0) {
        pvVar8 = operator_new((ulong)uVar4);
        ___bzero(pvVar8,(ulong)uVar4);
      }
      FUN_1004996e0(pvVar8,&local_70);
      uVar9 = FUN_1002a6120(lVar10,0,1);
      FUN_1002a5a50(uVar9,0,pvVar8,uVar4);
      uVar9 = local_60;
      lVar6 = FUN_1002a6010(lVar10);
      *(int *)(lVar6 + 0x1c) = (int)uVar9;
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
    }
    FUN_1004c07d0(param_1 + 0x40,lVar10,local_54);
  }
LAB_100497ede:
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (bVar12) {
    QMutex::unlock();
  }
LAB_100497efb:
  FUN_100498de0(&local_70);
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

