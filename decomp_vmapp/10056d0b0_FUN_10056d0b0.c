
void FUN_10056d0b0(long *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  char *pcVar18;
  ulong uVar19;
  uint uVar20;
  QArrayData *local_248;
  QArrayData *local_240;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar19 = (ulong)*(uint *)(param_1 + 0x22b) + *param_2;
  uVar2 = *(uint *)(param_1 + 0x224);
  lVar12 = (**(code **)(*param_1 + 0x2e0))();
  puVar1 = (uint *)(param_2 + 10);
  uVar3 = *(uint *)(param_2 + 1);
  uVar4 = *(uint *)(param_2 + 10);
  uVar13 = (**(code **)(*param_1 + 0x2e0))(param_1);
  uVar5 = param_1[0x22a];
  uVar20 = uVar4;
  if (uVar5 < uVar4 / uVar13 + uVar19) {
    if (uVar19 < uVar5) {
      iVar10 = (**(code **)(*param_1 + 0x2e0))(param_1);
      uVar20 = iVar10 * ((int)uVar5 - (int)uVar19);
      if ((uVar3 & 1) == 0) {
        FUN_10070b2d0(puVar1,uVar20,uVar4 - uVar20);
      }
      goto LAB_10056d1ac;
    }
    if ((uVar3 & 1) == 0) {
      FUN_10070b2d0(puVar1,0,(ulong)uVar4);
    }
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x20;
    lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
    goto LAB_10056d297;
  }
LAB_10056d1ac:
  if (uVar20 == 0) {
    FUN_1008e3970("","vdisk",0,"Error: DIO, Size == 0");
LAB_10056d23c:
    if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
      FUN_10070aed0(param_2);
      return;
    }
    goto LAB_10056d882;
  }
  uVar4 = *(uint *)(param_1 + 0x224);
  lVar14 = (**(code **)(*param_1 + 0x2e0))(param_1);
  if (lVar14 * (ulong)uVar4 - (lVar12 * (uVar19 % (ulong)uVar2) & 0xffffffff) < (ulong)uVar20) {
    FUN_1008e3970("","vdisk",0,"Error: DIO, prechunking failed");
    lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10056d297:
    FUN_10070aef0(param_2,0xe);
  }
  else {
    if (*(int *)(param_3 + 0xc) == -1) {
      if ((uVar3 & 1) == 0) {
        FUN_10070b2d0(puVar1,0,uVar20);
        goto LAB_10056d23c;
      }
      FUN_1008e3970("","vdisk",0,
                    "Error: SubmitAsync - Invalid block in table, LBA 0x%llx, size 0x%x",*param_2,
                    uVar20);
      cVar9 = (**(code **)(*param_1 + 0x1d8))(param_1);
      if (cVar9 != '\0') {
        *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x20;
      }
      lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_10056d297;
    }
    plVar15 = param_2;
    if (uVar20 != *puVar1) {
      *(undefined4 *)(param_2 + 7) = 0;
      plVar15 = (long *)FUN_10070ade0();
      if (plVar15 == (long *)0x0) {
        FUN_1008e3970("","vdisk",0,"Error: dio split failed");
        lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_10056d297;
      }
      FUN_10070b420(plVar15 + 10,puVar1,0,uVar20);
      *(int *)(plVar15 + 1) = (int)param_2[1];
      plVar15[3] = param_2[3];
      plVar15[6] = param_2[6];
      plVar15[2] = (long)param_2;
      plVar15[9] = (long)FUN_10070b1d0;
      *(int *)(param_2 + 7) = (int)param_2[7] + 1;
    }
    lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
    param_2 = plVar15;
    if (((*(byte *)((long)param_1 + 0x1142) & 2) != 0) &&
       (param_2 = (long *)FUN_10070b530(plVar15), param_2 == (long *)0x0)) {
      pcVar18 = "Error gathering incoming request";
      param_2 = plVar15;
LAB_10056d5d7:
      FUN_1008e3970("","vdisk",0,pcVar18);
      goto LAB_10056d297;
    }
    if ((uVar3 & 1) == 0) {
      if (param_1[0x236] != 0) {
        puVar16 = _malloc(0x20);
        if (puVar16 == (undefined8 *)0x0) {
          pcVar18 = "Error: allocation problems";
          goto LAB_10056d5b1;
        }
        puVar16[2] = param_2[2];
        *puVar16 = param_1;
        puVar16[1] = FUN_1005808e0;
        puVar16[3] = *param_2;
        param_2[2] = (long)puVar16;
        *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) | 1;
      }
    }
    else {
      if (*(int *)((long)param_1 + 0x12cc) != 0) {
        plVar15 = (long *)param_1[0x240];
        if (plVar15 != param_1 + 0x240) {
          lVar12 = *param_2;
          lVar14 = param_2[10];
          lVar8 = param_2[1];
          do {
            (**(code **)(plVar15[-1] + 8))(plVar15 + -1,lVar12,(int)lVar14,(int)lVar8);
            plVar15 = (long *)*plVar15;
          } while (plVar15 != param_1 + 0x240);
        }
      }
      if ((param_1[0x23f] == 0) && ((int)param_1[0x25a] == 0)) {
        lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
      else {
        plVar15 = (long *)FUN_10070b6c0(param_2);
        lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (plVar15 == (long *)0x0) {
          pcVar18 = "Error: gathering request for watcher";
LAB_10056d5b1:
          FUN_1008e3970("","vdisk",0,pcVar18);
          goto LAB_10056d297;
        }
        puVar16 = _malloc(0x20);
        param_2 = plVar15;
        if (puVar16 == (undefined8 *)0x0) {
          pcVar18 = "Error: allocation problems";
          goto LAB_10056d5d7;
        }
        *puVar16 = param_1;
        puVar16[1] = FUN_10056d980;
        puVar16[2] = plVar15[2];
        puVar16[3] = uVar19;
        plVar15[2] = (long)puVar16;
      }
      if (param_1[0x236] != 0) {
        uVar2 = *(uint *)(param_1 + 0x228);
        *(uint *)(param_1 + 0x228) = uVar2 | 0x10000;
        iVar10 = (**(code **)(*param_1 + 0x3b8))(param_1,param_2 + 10,*param_2);
        if ((uVar2 & 0x10000) != 0) {
          *(byte *)((long)param_1 + 0x1142) = *(byte *)((long)param_1 + 0x1142) & 0xfe;
        }
        if (iVar10 < 0) {
          FUN_1008e3970("","vdisk",0,"Error: Encryption failed with code 0x%x");
          goto LAB_10056d297;
        }
      }
      if (*param_2 == 0) {
        FUN_1008e3970("","vdisk",0,"Write to MBR detected");
        if (*(uint *)(param_2 + 0xc) < 0x200) {
          puVar17 = local_238;
          FUN_10070b220(puVar17,param_2 + 10,0,0x200);
        }
        else {
          puVar17 = (undefined1 *)param_2[0xb];
        }
        FUN_100689b90(puVar17);
        if (*(char *)((long)param_1 + 0x11a4) == '\0') {
          uVar11 = (**(code **)(*param_1 + 0x2e0))();
          iVar10 = FUN_10070b360(param_2 + 10,0,uVar11);
          if (iVar10 == 0) {
            *(undefined1 *)((long)param_1 + 0x11a4) = 1;
            pcVar7 = *(code **)(*param_1 + 0x138);
            local_240 = (QArrayData *)QString::fromAscii_helper("Bootable",8);
            if (*(char *)((long)param_1 + 0x11a4) == '\0') {
              pcVar18 = "0";
            }
            else {
              pcVar18 = "1";
            }
            lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
            local_248 = (QArrayData *)QString::fromAscii_helper(pcVar18,1);
            (*pcVar7)(param_1,&local_240,&local_248);
            if (*(int *)local_248 != -1) {
              if (*(int *)local_248 != 0) {
                LOCK();
                *(int *)local_248 = *(int *)local_248 + -1;
                local_238[0] = *(int *)local_248 != 0;
                UNLOCK();
                if ((bool)local_238[0]) goto LAB_10056d834;
              }
              QArrayData::deallocate(local_248,2,8);
            }
LAB_10056d834:
            if (*(int *)local_240 != -1) {
              if (*(int *)local_240 != 0) {
                LOCK();
                *(int *)local_240 = *(int *)local_240 + -1;
                local_238[0] = *(int *)local_240 != 0;
                UNLOCK();
                if ((bool)local_238[0]) goto LAB_10056d654;
              }
              QArrayData::deallocate(local_240,2,8);
            }
          }
          else {
            lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
          }
        }
        else {
          lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
      }
    }
LAB_10056d654:
    uVar6 = *(undefined8 *)(param_1[0x225] + (ulong)*(uint *)(param_3 + 0xc) * 8);
    iVar10 = FUN_10056b550(param_1,uVar6,param_2);
    if (iVar10 < 0) goto LAB_10056d297;
    if ((uVar3 & 1) == 0) {
      FUN_100591bb0(uVar6,param_2,param_3);
    }
    else {
      FUN_100592520(uVar6,param_2,param_3);
    }
  }
  if (lVar12 == local_38) {
    return;
  }
LAB_10056d882:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

