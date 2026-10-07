
void FUN_100594070(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  byte extraout_var;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
code_r0x000100594070:
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar9;
  if (5 < (int)param_1[0x21b] - 2U) {
    FUN_1008e3970("","vdisk",0,"Error: unknown state %u");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0xe3d,
                  "ProcessState");
    if (lVar9 == local_38) {
      return;
    }
    goto LAB_10059485d;
  }
  plVar14 = (long *)param_1[1];
  switch((int)param_1[0x21b]) {
  case 2:
    if (param_1[0x225] == 0) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "!dio_list_empty(&req->wr0_dio_list)","Storage.cpp",0xd56,"ProcessState");
    }
    *(undefined4 *)(param_1 + 0x21b) = 3;
    if (param_1[0x223] != 0) goto LAB_100594648;
    lVar9 = param_1[0x225];
    uVar10 = 0;
    if (lVar9 != 0) {
      do {
        uVar13 = (int)uVar10 + *(int *)(lVar9 + 0x50);
        uVar10 = (ulong)uVar13;
        lVar9 = *(long *)(lVar9 + 0x20);
      } while (lVar9 != 0);
      uVar10 = (ulong)uVar13;
    }
    uVar13 = *(uint *)((long *)param_1[1] + 3);
    lVar9 = (**(code **)(*(long *)param_1[1] + 0x30))();
    if (uVar10 == lVar9 * (ulong)uVar13) {
      *(undefined1 *)((long)param_1 + 0x1114) = 1;
      FUN_100594070(param_1);
      lVar9 = *(long *)(*(long *)(param_1[1] + 0x70) + 0x1350);
      if (lVar9 != 0) {
        plVar14 = (long *)(lVar9 + 0xf0);
        *plVar14 = *plVar14 + 1;
      }
    }
    else {
LAB_100594648:
      lVar9 = param_1[1];
      if ((*(char *)(lVar9 + 0xb1) == '\0') &&
         (*(int *)(lVar9 + 200) == *(int *)((long)param_1 + 0x110c))) {
        iVar8 = FUN_1005920b0(param_1 + 5,lVar9 + 0x110,param_1[0x21f]);
        if (iVar8 < 0) {
          FUN_1008e3970("","vdisk",0,"Error: can\'t create track dio request: err=0x%x");
LAB_10059482c:
          FUN_100593e40(param_1,8,0xe);
          break;
        }
        lVar9 = param_1[1];
        lVar6 = *(long *)(*(long *)(lVar9 + 0x70) + 0x1338);
        if (lVar6 != 0) {
          plVar14 = (long *)(lVar6 + 0xf0);
          *plVar14 = *plVar14 + 1;
        }
      }
      param_1[5] = param_1[0x21d];
      uVar10 = (ulong)*(uint *)((long)param_1 + 0x110c) + *(long *)(lVar9 + 0x58);
      plVar14 = *(long **)(*(long *)(*(long *)(lVar9 + 0x40) + (uVar10 >> 9) * 8) +
                          (uVar10 & 0x1ff) * 8);
      (**(code **)(*plVar14 + 0x80))(plVar14,param_1 + 5);
      lVar9 = *(long *)(*(long *)(param_1[1] + 0x70) + 0x1358);
      if (lVar9 != 0) {
        plVar14 = (long *)(lVar9 + 0xf0);
        *plVar14 = *plVar14 + 1;
      }
    }
    break;
  case 3:
    lVar9 = plVar14[3];
    iVar8 = (**(code **)(*plVar14 + 0x30))();
    uVar13 = iVar8 * (int)lVar9;
    uVar11 = *(undefined8 *)(param_1[1] + 0x70);
    *(undefined4 *)(param_1 + 0x21b) = 4;
    for (puVar12 = (undefined8 *)param_1[0x225]; puVar12 != (undefined8 *)0x0;
        puVar12 = (undefined8 *)puVar12[4]) {
      uVar10 = FUN_10056c950(uVar11,*puVar12);
      uVar1 = *(uint *)((long *)param_1[1] + 3);
      lVar9 = (**(code **)(*(long *)param_1[1] + 0x30))();
      uVar10 = lVar9 * (uVar10 % (ulong)uVar1);
      iVar8 = (int)uVar10;
      if (uVar13 < (uint)(*(int *)(puVar12 + 10) + iVar8)) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "d->di_vec.dv_size + off <= block_size","Storage.cpp",0xd9a,"ProcessState");
      }
      FUN_10070b220((uVar10 & 0xffffffff) + param_1[4],puVar12 + 10,0,uVar13 - iVar8);
    }
    while (puVar12 = (undefined8 *)param_1[0x223], puVar12 != (undefined8 *)0x0) {
      lVar9 = puVar12[4];
      param_1[0x223] = lVar9;
      if (lVar9 == 0) {
        param_1[0x224] = 0;
      }
      puVar12[4] = 0;
      uVar10 = FUN_10056c950(uVar11,*puVar12);
      uVar1 = *(uint *)((long *)param_1[1] + 3);
      lVar9 = (**(code **)(*(long *)param_1[1] + 0x30))();
      uVar10 = lVar9 * (uVar10 % (ulong)uVar1);
      iVar8 = (int)uVar10;
      if (uVar13 < (uint)(*(int *)(puVar12 + 10) + iVar8)) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "d->di_vec.dv_size + off <= block_size","Storage.cpp",0xda3,"ProcessState");
      }
      FUN_10070b090(puVar12 + 10,(uVar10 & 0xffffffff) + param_1[4],0,uVar13 - iVar8);
      FUN_10070aed0(puVar12);
    }
    if (*(char *)((long)param_1 + 0x1114) != '\0') goto code_r0x000100594616;
    if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
      FUN_10056d000(*(undefined8 *)(param_1[1] + 0x70),param_1 + 0x229);
      return;
    }
    goto LAB_10059485d;
  case 4:
    *(undefined4 *)(param_1 + 0x21b) = 5;
    param_1[0x110] = param_1[0x21e];
                    /* WARNING: Could not recover jumptable at 0x000100594405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x80))((long *)param_1[2],param_1 + 0x110);
    return;
  case 5:
    lVar9 = param_1[0x21f];
    lVar6 = plVar14[1];
    local_50 = 0xffffffffffffffff;
    local_58 = -1;
    local_40 = 0;
    local_48 = 0;
    *(undefined4 *)(param_1 + 0x21b) = 6;
    iVar8 = (**(code **)(*(long *)param_1[2] + 0xc0))
                      ((long *)param_1[2],lVar9 - lVar6,param_1[0x21e]);
    plVar14 = (long *)param_1[3];
    if (plVar14 == (long *)0x0) {
      bVar7 = 0;
    }
    else if ((long *)param_1[2] == plVar14) {
      bVar7 = 0;
    }
    else {
      (**(code **)(*plVar14 + 0xc0))(plVar14,lVar9 - lVar6,0);
      bVar7 = extraout_var >> 7;
    }
    if ((iVar8 < 0) || (bVar7 != 0)) goto LAB_10059482c;
    uVar11 = (**(code **)(**(long **)(param_1[1] + 0x70) + 0x350))();
    iVar8 = FUN_1005abe90(uVar11,0xffffffff,param_1[0x21f],&local_58);
    if ((iVar8 != -0x7ffddffd) && (iVar8 != 0)) goto LAB_10059482c;
    if (((-1 < iVar8) && (uVar13 = *(uint *)(param_1 + 0x222), uVar13 != 0xffffffff)) &&
       ((*(uint *)((long)param_1 + 0x110c) == (uint)local_50 || ((uint)local_50 < uVar13)))) {
      local_50 = CONCAT44(local_50._4_4_,uVar13);
      local_58 = param_1[0x21e];
      local_48 = CONCAT71(local_48._1_7_,0xff);
      uVar11 = (**(code **)(**(long **)(param_1[1] + 0x70) + 0x350))();
      iVar8 = FUN_1005ac760(uVar11,param_1[0x21f],&local_58);
      if (iVar8 < 0) goto LAB_10059482c;
    }
    FUN_10056d000(*(undefined8 *)(param_1[1] + 0x70),param_1 + 0x229);
    break;
  case 6:
    lVar9 = param_1[0x21e];
    plVar2 = (long *)param_1[2];
    uVar13 = *(uint *)(plVar14 + 3);
    lVar6 = plVar14[0xe];
    lVar3 = param_1[0x225];
    plVar14 = (long *)0x0;
    if ((long *)param_1[0x227] != (long *)0x0) {
      plVar14 = (long *)param_1[0x227];
    }
    param_1[0x228] = 0;
    param_1[0x227] = 0;
    param_1[0x226] = 0;
    param_1[0x225] = 0;
    QMutex::lock();
    *(undefined4 *)(param_1 + 0x21b) = 8;
    QWaitCondition::wakeAll();
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      FUN_10059a420(lVar4,param_1 + 0x21c);
    }
    QMutex::unlock();
    while (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined4 *)(lVar3 + 0x28) = 0;
      FUN_10070aed0(lVar3);
      lVar3 = lVar4;
    }
    while (plVar14 != (long *)0x0) {
      plVar5 = (long *)plVar14[4];
      plVar14[4] = 0;
      uVar10 = FUN_10056c950(lVar6,*plVar14);
      *plVar14 = uVar10 % (ulong)uVar13 + lVar9;
      (**(code **)(*plVar2 + 0x80))(plVar2,plVar14);
      plVar14 = plVar5;
    }
    break;
  case 7:
    QMutex::lock();
    *(undefined4 *)(param_1 + 0x21b) = 8;
    QWaitCondition::wakeAll();
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      FUN_10059a420(lVar6,param_1 + 0x21c);
    }
    if (lVar9 == local_38) {
      QMutex::unlock();
      return;
    }
    goto LAB_10059485d;
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
LAB_10059485d:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x000100594616:
  *(undefined1 *)((long)param_1 + 0x1114) = 0;
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) goto LAB_10059485d;
  goto code_r0x000100594070;
}

