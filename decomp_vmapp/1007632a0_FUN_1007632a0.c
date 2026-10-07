
void FUN_1007632a0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_var;
  long lVar7;
  ssize_t sVar8;
  int *piVar9;
  char *pcVar10;
  long *plVar11;
  uint uVar12;
  void *local_78;
  uint local_6c;
  undefined8 local_68;
  socklen_t local_60;
  char local_59;
  void *local_58;
  uint local_50;
  sockaddr local_48;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (*(long *)(param_1 + 0x10) != 0) {
    local_60 = 0x10;
    iVar5 = _accept(*(int *)(param_1 + 0x3c),&local_48,&local_60);
    local_78 = (void *)CONCAT44(extraout_var,iVar5);
    if (iVar5 != -1) {
      do {
        iVar6 = FUN_1007631d0(param_1,iVar5,&local_59,1);
        if (iVar6 != 0) goto LAB_1007635b8;
        if (local_59 < 'r') {
          if (local_59 == 'm') {
            iVar6 = FUN_1007631d0(param_1,iVar5,&local_68,8);
            if (iVar6 != 0) goto LAB_1007635b8;
            FUN_100762800(param_1,local_68);
          }
          else {
            if (local_59 == 'q') goto LAB_1007635b3;
LAB_1007634d2:
            FUN_1008e3970("","etrace",0,"Unknown command: %c");
          }
        }
        else if (local_59 == 'r') {
          puVar2 = *(undefined8 **)(param_1 + 0x10);
          uVar3 = *puVar2;
          *puVar2 = 0;
          if (puVar2 == (undefined8 *)0x0) {
            FUN_1008e3970("","etrace",0);
            iVar6 = 4;
          }
          else {
            uVar4 = (ulong)*(uint *)(puVar2 + 1) % (ulong)*(uint *)(param_1 + 0x1c);
            if ((puVar2[uVar4 * 2 + 6] & 0xffffffffffff) == 0) {
              iVar6 = (int)uVar4 << 4;
            }
            else {
              iVar6 = *(uint *)(param_1 + 0x1c) * 0x10 + 0x10;
            }
            uVar12 = iVar6 + 0x30;
            local_78 = _malloc((ulong)uVar12);
            local_6c = uVar12;
            local_58 = local_78;
            local_50 = uVar12;
            FUN_100767790(param_1,&local_58);
            iVar6 = 4;
          }
          do {
            sVar8 = _send(iVar5,&local_6c,(long)iVar6,0);
            if ((int)sVar8 == -1) goto LAB_1007635b8;
            iVar6 = iVar6 - (int)sVar8;
            uVar12 = local_6c;
          } while (iVar6 != 0);
          for (; uVar12 != 0; uVar12 = uVar12 - (int)sVar8) {
            sVar8 = _send(iVar5,local_78,(long)(int)uVar12,0);
            if ((int)sVar8 == -1) goto LAB_1007635b8;
          }
          _free(local_78);
          **(undefined8 **)(param_1 + 0x10) = uVar3;
        }
        else {
          if (local_59 != 'x') goto LAB_1007634d2;
          plVar11 = *(long **)(param_1 + 0x10);
          if (plVar11 == (long *)0x0) {
            FUN_1008e3970("","etrace",0,"Etrace is not initialized yet...");
            plVar11 = *(long **)(param_1 + 0x10);
          }
          else {
            if ((*plVar11 != 0) && (plVar11[4] == 0)) {
              lVar7 = FUN_1007d87f0();
              plVar11 = *(long **)(param_1 + 0x10);
              plVar11[4] = lVar7;
            }
            *plVar11 = 0;
          }
          *(undefined4 *)(plVar11 + 1) = 0;
          plVar11[4] = 0;
          plVar11[3] = 0;
          plVar11[2] = 0;
          ___bzero(plVar11 + 6,(ulong)*(uint *)(param_1 + 0x18) - 0x30);
        }
        _close(iVar5);
        local_60 = 0x10;
        iVar5 = _accept(*(int *)(param_1 + 0x3c),&local_48,&local_60);
      } while (iVar5 != -1);
    }
    piVar9 = ___error();
    pcVar10 = _strerror(*piVar9);
    FUN_1008e3970("","etrace",0,"accept() failed: %s",pcVar10);
    iVar5 = *(int *)(param_1 + 0x3c);
LAB_1007635b3:
    _close(iVar5);
  }
LAB_1007635b8:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

