
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100592520(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  void *pvVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar19;
  long lVar20;
  undefined8 *puVar21;
  uint local_a4;
  QArrayData *local_80;
  long *local_78;
  undefined1 local_69;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  uVar19 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar7 = FUN_10056c950(*(undefined8 *)(param_1 + 0x70),*param_2);
  uVar3 = *(uint *)(param_3 + 1);
  uVar14 = (ulong)uVar3;
  iVar6 = *(int *)(param_1 + 0x60);
  plVar9 = (long *)0x0;
  local_78 = (long *)0x0;
  local_50 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  local_40 = 0;
  local_48 = 0;
  if (uVar14 != 0xffffffff) {
    uVar8 = *(long *)(param_1 + 0x58) + uVar14;
    lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8
                      );
    plVar9 = (long *)0x0;
    if (lVar20 != 0) {
      plVar9 = (long *)___dynamic_cast(lVar20,&PTR_vtable_10111dd60,&PTR_vtable_100bcc3b0,
                                       0xffffffffffffffff);
    }
  }
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    uVar10 = CONCAT44(uVar19,0xb94);
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","dio->di_flags & PRL_DIO_WRITE",
                  "Storage.cpp",uVar10,"WriteAsync");
    uVar19 = (undefined4)((ulong)uVar10 >> 0x20);
  }
  if (*(char *)(param_1 + 0x7c) == '\0') {
    FUN_1008e3970("","vdisk",0,"Error: WriteAsync - disk not opened");
    FUN_10070aef0(param_2,0xe);
    goto LAB_10059273c;
  }
  if (*(char *)(param_1 + 0x8c) == '\0') {
    lVar20 = *(long *)(*(long *)(param_1 + 0x70) + 0x1360);
    if (lVar20 != 0) {
      plVar2 = (long *)(lVar20 + 0xf0);
      *plVar2 = *plVar2 + 1;
    }
    if ((uVar3 == 0xffffffff) &&
       (iVar5 = FUN_10070b360(param_2 + 10,0,(int)param_2[10]), iVar5 != 0)) {
      FUN_10070aed0(param_2);
      lVar20 = *(long *)(*(long *)(param_1 + 0x70) + 0x1370);
      if (lVar20 != 0) {
        plVar9 = (long *)(lVar20 + 0xf0);
        *plVar9 = *plVar9 + 1;
      }
    }
    else {
      local_a4 = *(uint *)(param_1 + 0xac);
      if (local_a4 == 0xffffffff) {
        local_a4 = iVar6 - 1;
      }
      else {
        uVar10 = (**(code **)(**(long **)(param_1 + 0x70) + 0x350))();
        iVar6 = FUN_1005abe90(uVar10,*(undefined4 *)(param_1 + 0xac),uVar7,&local_58);
        if (iVar6 < 0) {
          FUN_1008e3970("","vdisk",0,"Error: failed to get backward block");
          FUN_10070aef0(param_2,0xe);
          goto LAB_10059273c;
        }
      }
      lVar20 = param_1 + 0x90;
      QMutex::lock();
      uVar8 = uVar7 / *(uint *)(param_1 + 0x18);
      plVar2 = (long *)(param_1 + 0x100);
      plVar15 = *(long **)(param_1 + 0x100);
      plVar13 = plVar2;
      if (*(long **)(param_1 + 0x100) != (long *)0x0) {
        do {
          while (plVar12 = plVar15, (ulong)plVar12[4] < uVar8) {
            plVar1 = plVar12 + 1;
            plVar12 = plVar13;
            plVar15 = (long *)*plVar1;
            if ((long *)*plVar1 == (long *)0x0) goto LAB_1005928c1;
          }
          plVar15 = (long *)*plVar12;
          plVar13 = plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
LAB_1005928c1:
        if ((plVar12 != plVar2) && ((ulong)plVar12[4] <= uVar8)) {
          QMutex::unlock();
          lVar20 = plVar12[5];
          lVar16 = *(long *)(lVar20 + 0x10);
          if (*(int *)(lVar16 + 0x10d8) - 5U < 2) {
            if (lVar20 == 0) {
              lVar16 = 0;
            }
            param_2[4] = 0;
            if (*(long *)(lVar16 + 0x1140) == 0) {
              *(long **)(lVar16 + 0x1138) = param_2;
            }
            else {
              *(long **)(*(long *)(lVar16 + 0x1140) + 0x20) = param_2;
            }
            *(long **)(lVar16 + 0x1140) = param_2;
            lVar20 = *(long *)(*(long *)(param_1 + 0x70) + 0x1330);
            if (lVar20 != 0) {
              plVar9 = (long *)(lVar20 + 0xf0);
              *plVar9 = *plVar9 + 1;
            }
          }
          else if (*(int *)(lVar16 + 0x10d8) - 2U < 3) {
            if (lVar20 == 0) {
              lVar16 = 0;
            }
            param_2[4] = 0;
            if (*(long *)(lVar16 + 0x1130) == 0) {
              *(long **)(lVar16 + 0x1128) = param_2;
            }
            else {
              *(long **)(*(long *)(lVar16 + 0x1130) + 0x20) = param_2;
            }
            *(long **)(lVar16 + 0x1130) = param_2;
            lVar20 = *(long *)(*(long *)(param_1 + 0x70) + 0x1328);
            if (lVar20 != 0) {
              plVar9 = (long *)(lVar20 + 0xf0);
              *plVar9 = *plVar9 + 1;
            }
          }
          else {
            FUN_1008e3970("","vdisk",0,"Error: unknown state %u");
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",
                          CONCAT44(uVar19,0xbde),"WriteAsync");
          }
          goto LAB_10059273c;
        }
      }
      if (uVar3 == local_a4) {
        QMutex::unlock();
        if (param_2 == (long *)0x880) {
          FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","dio != &req->meta_wr_dio"
                        ,"Storage.cpp",CONCAT44(uVar19,0xbea),"WriteAsync");
        }
        *param_2 = uVar7 % (ulong)*(uint *)(param_1 + 0x18) + *param_3;
        uVar14 = uVar14 + *(long *)(param_1 + 0x58);
        (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar14 >> 9) * 8) +
                                (uVar14 & 0x1ff) * 8) + 0x80))();
        lVar20 = *(long *)(*(long *)(param_1 + 0x70) + 0x1340);
        if (lVar20 != 0) {
          plVar9 = (long *)(lVar20 + 0xf0);
          *plVar9 = *plVar9 + 1;
        }
      }
      else {
        puVar21 = (undefined8 *)(param_1 + 0xf8);
        plVar15 = plVar2;
        pvVar11 = operator_new(0x1178);
        lVar16 = 0;
        if (((*(int *)(param_1 + 0xac) != -1) && (lVar16 = 0, plVar9 != (long *)0x0)) &&
           (*(uint *)(param_1 + 200) == uVar3)) {
          lVar16 = (long)plVar9 + *(long *)(*plVar9 + -0x18);
        }
        uVar8 = (ulong)local_a4 + *(long *)(param_1 + 0x58);
        FUN_1005934f0(pvVar11,puVar21,0,uVar7,*param_3,param_1,lVar16,
                      *(undefined8 *)
                       (*(long *)(*(long *)(param_1 + 0x40) + (uVar8 >> 9) * 8) +
                       (uVar8 & 0x1ff) * 8),uVar3,local_a4,lVar20,puVar21,plVar15);
        uVar19 = (undefined4)((ulong)lVar16 >> 0x20);
        plVar9 = (long *)FUN_10059a1c0(pvVar11,0);
        local_78 = plVar9;
        if (plVar9 == (long *)0x0) {
          bVar17 = true;
          plVar15 = (long *)0x0;
          local_68 = _DAT_000010e0;
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar15 = plVar9 + 1;
          lVar20 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
          local_68 = *(undefined8 *)(&DAT_000010e0 + plVar9[2]);
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          bVar17 = false;
          plVar15 = plVar9;
        }
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        local_60 = plVar15;
        auVar18 = FUN_10059a310(puVar21,&local_68);
        plVar13 = auVar18._0_8_;
        if (!bVar17) {
          plVar12 = plVar15 + 1;
          LOCK();
          plVar1 = plVar15 + 1;
          lVar20 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
          LOCK();
          lVar20 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
          LOCK();
          lVar20 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
          LOCK();
          lVar20 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        if ((auVar18._8_8_ & 1) == 0) {
          FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","ins.second","Storage.cpp"
                        ,CONCAT44(uVar19,0xc12),"WriteAsync");
        }
        plVar15 = (long *)plVar13[5];
        if (plVar15 != (long *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        local_78 = plVar15;
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar12 = plVar9 + 1;
          lVar20 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        QMutex::unlock();
        cVar4 = FUN_1005931e0(param_1,param_2,&local_78,uVar14,local_a4,local_58);
        if (cVar4 == '\0') {
          FUN_1008e3970("","vdisk",0,"Error: WriteAsync failed, sys_err=%u",(int)param_2[5]);
          QMutex::lock();
          if (plVar13 != plVar2) {
            *(undefined4 *)(plVar15[2] + 0x10d8) = 8;
            *(undefined4 *)(plVar15[2] + 0x1100) = 4;
            *(int *)(plVar15[2] + 0x1104) = (int)param_2[5];
            QWaitCondition::wakeAll();
            *(undefined8 *)plVar15[2] = 0;
            plVar9 = plVar13;
            plVar2 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) {
              do {
                plVar12 = (long *)plVar9[2];
                bVar17 = (long *)*plVar12 != plVar9;
                plVar9 = plVar12;
              } while (bVar17);
            }
            else {
              do {
                plVar12 = plVar2;
                plVar2 = (long *)*plVar12;
              } while ((long *)*plVar12 != (long *)0x0);
            }
            if ((long *)*puVar21 == plVar13) {
              *puVar21 = plVar12;
            }
            *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + -1;
            FUN_1000e86c0(*(undefined8 *)(param_1 + 0x100),plVar13);
            plVar9 = (long *)plVar13[5];
            if (plVar9 != (long *)0x0) {
              LOCK();
              plVar2 = plVar9 + 1;
              lVar20 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar20 == 1) {
                (**(code **)(*plVar9 + 0x10))();
              }
            }
            operator_delete(plVar13);
          }
          QMutex::unlock();
          FUN_10070aed0(param_2);
        }
        else {
          FUN_100593420(param_1,param_2,&local_78,uVar14);
        }
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar9 = plVar15 + 1;
          lVar20 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    goto LAB_10059273c;
  }
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Error: trying to write to read only image %s",
                local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_69 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1005926c5;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1005926c5:
  FUN_1008e3970("","vdisk",0,"\tBlock %llu (%llu) Size %u",uVar7,uVar7 - *(long *)(param_1 + 8),
                CONCAT44(uVar19,(int)param_2[10]));
  FUN_10070aed0(param_2);
LAB_10059273c:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

