
int FUN_1006177f0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  QArrayData *pQVar9;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  long local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  long *local_98;
  long *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined8 *local_78;
  undefined1 local_69;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  if (DAT_1011cca60 != (undefined8 *)0x0) {
    puVar2 = DAT_1011cca60;
    puVar6 = &DAT_1011cca60;
    do {
      while (puVar8 = puVar2, iVar3 = FUN_1007ea6f0(puVar8 + 4,param_1), iVar3 < 0) {
        puVar2 = (undefined8 *)puVar8[1];
        if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) goto LAB_100617880;
      }
      puVar6 = puVar8;
      puVar2 = (undefined8 *)*puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
LAB_100617880:
    if (((undefined8 **)puVar6 != &DAT_1011cca60) &&
       (iVar3 = FUN_1007ea6f0(param_1,puVar6 + 4), -1 < iVar3)) {
      plVar1 = (long *)puVar6[6];
      plVar5 = (long *)FUN_100619260(plVar1 + 3,param_2,0);
      if (*plVar5 != plVar1[3]) {
        if (*(long *)*plVar1 == 0) {
          local_98 = (long *)0x0;
          FUN_1007ea840(plVar1 + 1,local_68);
          iVar3 = (**(code **)(*plVar1 + 0x30))(local_68,&local_98);
          if (iVar3 < 0) {
            FUN_1007d6a70(&local_a8,plVar1 + 1);
            QString::toUtf8();
            FUN_1008e3970("","prlplg",0,"Error creating static object %s! 0x%x",
                          local_a0 + *(long *)(local_a0 + 0x10),iVar3);
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_69 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_100617efc;
              }
              QArrayData::deallocate(local_a0,1,8);
            }
LAB_100617efc:
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_69 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_100617fff;
              }
              QArrayData::deallocate(local_a8,2,8);
            }
          }
          else {
            local_b0 = 0;
            iVar3 = (**(code **)(*local_98 + 0x10))(local_98,param_2,&local_b0);
            if (iVar3 < 0) {
              FUN_1008e3970("","prlplg",0,"Error queriing interface from static object! 0x%x",iVar3)
              ;
              (**(code **)*local_98)();
            }
            else {
              *param_3 = local_b0;
              iVar3 = 0;
            }
          }
        }
        else {
          local_78 = (undefined8 *)0x0;
          FUN_1007ea840(plVar1 + 1,local_48);
          iVar3 = (**(code **)(*plVar1 + 0x30))(local_48,&local_78);
          if (iVar3 < 0) {
            FUN_1007d6a70(&local_88,plVar1 + 1);
            QString::toUtf8();
            FUN_1008e3970("","prlplg",0,"Error creating object %s! 0x%x",
                          local_80 + *(long *)(local_80 + 0x10),iVar3);
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_69 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_100617de9;
              }
              QArrayData::deallocate(local_80,1,8);
            }
LAB_100617de9:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_69 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_100617fff;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
          else {
            local_90 = (long *)0x0;
            FUN_1007ea840(param_2,local_58);
            iVar3 = (*(code *)local_78[1])(local_78,local_58,&local_90);
            plVar5 = local_90;
            if (iVar3 < 0) {
              FUN_1008e3970("","prlplg",0,"Error queriing interface! 0x%x",iVar3);
            }
            else {
              if ((DAT_1011bcaf8 == '\0') &&
                 (iVar3 = ___cxa_guard_acquire(&DAT_1011bcaf8), iVar3 != 0)) {
                FUN_1007d6cd0(&DAT_1011bcae8,&DAT_100b47c40);
                ___cxa_guard_release(&DAT_1011bcaf8);
              }
              if ((DAT_1011bcb10 == '\0') &&
                 (iVar3 = ___cxa_guard_acquire(&DAT_1011bcb10), iVar3 != 0)) {
                FUN_1007d6cd0(&DAT_1011bcb00,&DAT_100b47c50);
                ___cxa_guard_release(&DAT_1011bcb10);
              }
              if (((*plVar5 == 0) || (plVar5[2] == 0)) || (plVar5[1] == 0)) {
                iVar3 = -0x7ffbdffc;
                FUN_1008e3970("","prlplg",0,
                              "Error: plugin interface \'Release\' function reference is NULL");
              }
              else {
                iVar3 = FUN_1007ea6f0(param_2,&DAT_1011bcae8);
                if (iVar3 == 0) {
                  puVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
                  if (puVar6 != (undefined8 *)0x0) {
                    FUN_10061a350(puVar6);
                    ppuVar7 = &PTR_FUN_10111e7b0;
LAB_100617f9c:
                    *puVar6 = ppuVar7;
                    puVar6[2] = plVar5;
                    *param_3 = (long)puVar6;
                    iVar3 = 0;
                    goto LAB_100617fff;
                  }
LAB_100617fda:
                  *param_3 = 0;
                  iVar3 = -0x7ffffffe;
                }
                else {
                  iVar4 = FUN_1007ea6f0(param_2,&DAT_1011bcb00);
                  iVar3 = -0x7ffbe000;
                  if (iVar4 == 0) {
                    if (((((*plVar5 != 0) && (plVar5[3] != 0)) &&
                         ((plVar5[4] != 0 && ((plVar5[5] != 0 && (plVar5[6] != 0)))))) &&
                        (plVar5[7] != 0)) &&
                       (((plVar5[8] != 0 && (plVar5[1] != 0)) && (plVar5[2] != 0)))) {
                      puVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
                      if (puVar6 == (undefined8 *)0x0) goto LAB_100617fda;
                      FUN_10061a350(puVar6);
                      ppuVar7 = &PTR_FUN_10111e808;
                      goto LAB_100617f9c;
                    }
                    iVar3 = -0x7ffbdffc;
                    FUN_1008e3970("","prlplg",0,"Error: plugin interface is not complete.");
                  }
                }
                (*(code *)*plVar5)(plVar5);
              }
            }
            (*(code *)*local_78)();
          }
        }
LAB_100617fff:
        if (-1 < iVar3) {
          plVar5 = (long *)*param_3;
          if (plVar5 == (long *)0x0) {
            FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]","Obj","PrlPlugins.cpp",
                          0x38b,"CreateObject");
            plVar5 = (long *)*param_3;
          }
          iVar3 = 0;
          (**(code **)(*plVar5 + 0x18))(plVar5,plVar1 + 4);
          goto LAB_1006181d1;
        }
        FUN_1007d6a70(&local_f0,param_1);
        QString::toUtf8();
        pQVar9 = local_e8 + *(long *)(local_e8 + 0x10);
        FUN_1007d6a70(&local_100,param_2);
        QString::toUtf8();
        FUN_1008e3970("","prlplg",0,"Error creating object %s class %s code 0x%x",pQVar9,
                      local_f8 + *(long *)(local_f8 + 0x10),iVar3);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_69 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_10061812f;
          }
          QArrayData::deallocate(local_f8,1,8);
        }
LAB_10061812f:
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_69 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_100618165;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100618165:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_69 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_10061819b;
          }
          QArrayData::deallocate(local_e8,1,8);
        }
LAB_10061819b:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_69 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1006181d1;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
        goto LAB_1006181d1;
      }
      FUN_1007d6a70(&local_d0,param_2);
      QString::toUtf8();
      pQVar9 = local_c8 + *(long *)(local_c8 + 0x10);
      FUN_1007d6a70(&local_e0,param_1);
      QString::toUtf8();
      FUN_1008e3970("","prlplg",0,"Requested class %s not found in object %s",pQVar9,
                    local_d8 + *(long *)(local_d8 + 0x10));
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_69 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_100617c2c;
        }
        QArrayData::deallocate(local_d8,1,8);
      }
LAB_100617c2c:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_69 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_100617c62;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100617c62:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_69 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_100617c98;
        }
        QArrayData::deallocate(local_c8,1,8);
      }
LAB_100617c98:
      iVar3 = -0x7ffbdff8;
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_69 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1006181d1;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
      goto LAB_1006181d1;
    }
  }
  FUN_1007d6a70(&local_c0,param_1);
  QString::toUtf8();
  FUN_1008e3970("","prlplg",0,"Requested object %s is not found",
                local_b8 + *(long *)(local_b8 + 0x10));
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_69 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_100617b2f;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_100617b2f:
  iVar3 = -0x7ffbe000;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_69 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1006181d1;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1006181d1:
  QMutex::unlock();
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

