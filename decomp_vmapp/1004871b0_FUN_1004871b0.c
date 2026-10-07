
int FUN_1004871b0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  long *local_58;
  long *local_50;
  int local_44;
  int *local_40;
  int *local_38;
  
  local_44 = 0;
  iVar6 = FUN_100494cc0(param_4,&local_38,&local_40,&local_44);
  iVar7 = 0;
  if (-1 < iVar6) {
    bVar5 = true;
    piVar2 = local_38;
LAB_100487220:
    do {
      piVar10 = piVar2;
      iVar7 = 0;
      if (local_40 <= piVar10) break;
      piVar2 = (int *)((ulong)(uint)piVar10[1] + 8 + (long)piVar10);
      uVar11 = 0x30e0a;
      if (*piVar10 != 0x1000) {
        if (*piVar10 != 0x800) goto LAB_100487220;
        uVar11 = 0x30e09;
      }
      FUN_10078f4f0(&local_50,1,1,&DAT_1011ccb98,1);
      lVar8 = local_50[2];
      *(undefined4 *)(lVar8 + 0x40) = uVar11;
      if (local_50 == (long *)0x0) {
        lVar8 = 0;
      }
      FUN_10078f730(lVar8,0,0,piVar10 + 2,piVar10[1]);
      lVar8 = 0;
      if (local_50 != (long *)0x0) {
        lVar8 = local_50[2];
      }
      puVar9 = (undefined8 *)0x0;
      if (*param_1 != 0) {
        puVar9 = *(undefined8 **)(*param_1 + 0x10);
      }
      uVar3 = *puVar9;
      *(undefined8 *)(lVar8 + 0x18) = puVar9[1];
      *(undefined8 *)(lVar8 + 0x10) = uVar3;
      if (bVar5) {
        if (local_50 != (long *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        plVar4 = (long *)*param_2;
        *param_2 = (long)local_50;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        bVar5 = false;
      }
      plVar4 = local_50;
      local_58 = local_50;
      if (local_50 != (long *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      iVar7 = FUN_10047f040(param_5,param_3,&local_58,param_6);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
    } while (iVar7 == 0);
  }
  if ((local_44 != 0) && (local_38 != (int *)0x0)) {
    _free(local_38);
  }
  if ((iVar7 == 0) &&
     ((*(char *)(param_6 + 0x21) != '\0' ||
      (iVar7 = 0,
      99 < *(int *)(*(long *)(param_6 + 0x30) + 0xc) - *(int *)(*(long *)(param_6 + 0x30) + 8))))) {
    *(undefined8 *)(param_6 + 0x28) = param_4;
    iVar7 = -1;
  }
  lVar8 = FUN_1002a6010();
  uVar11 = 0x80034004;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x10) != 4) {
      return iVar7;
    }
    uVar11 = *(undefined4 *)(lVar8 + 0x2c);
  }
  FUN_100484e00(param_1,uVar11);
  return iVar7;
}

