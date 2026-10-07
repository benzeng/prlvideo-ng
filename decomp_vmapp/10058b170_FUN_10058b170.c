
int FUN_10058b170(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  int local_5c;
  undefined1 local_58 [12];
  undefined4 local_4c;
  QString local_48 [2];
  undefined1 local_31;
  
  plVar9 = (long *)(param_1 + 0x28);
  plVar12 = *(long **)(param_1 + 0x28);
  plVar14 = plVar9;
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_10058b206:
    plVar14 = plVar9;
  }
  else {
    do {
      while (plVar13 = plVar12, iVar5 = FUN_1007ea6f0(plVar13 + 4,param_2), -1 < iVar5) {
        plVar14 = plVar13;
        plVar12 = (long *)*plVar13;
        if ((long *)*plVar13 == (long *)0x0) goto LAB_10058b1f1;
      }
      plVar12 = (long *)plVar13[1];
    } while ((long *)plVar13[1] != (long *)0x0);
LAB_10058b1f1:
    if ((plVar14 == plVar9) || (iVar5 = FUN_1007ea6f0(param_2,plVar14 + 4), iVar5 < 0))
    goto LAB_10058b206;
  }
  plVar13 = (long *)*plVar9;
  plVar12 = plVar9;
  if ((long *)*plVar9 == (long *)0x0) {
LAB_10058b267:
    plVar12 = plVar9;
  }
  else {
    do {
      while (plVar11 = plVar13, iVar5 = FUN_1007ea6f0(plVar11 + 4,param_4), -1 < iVar5) {
        plVar12 = plVar11;
        plVar13 = (long *)*plVar11;
        if ((long *)*plVar11 == (long *)0x0) goto LAB_10058b251;
      }
      plVar13 = (long *)plVar11[1];
    } while ((long *)plVar11[1] != (long *)0x0);
LAB_10058b251:
    if ((plVar12 == plVar9) || (iVar5 = FUN_1007ea6f0(param_4,plVar12 + 4), iVar5 < 0))
    goto LAB_10058b267;
  }
  local_48[0].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_5c = (**(code **)(*(long *)*param_3 + 0x38))((long *)*param_3,local_58);
  if (local_5c < 0) {
    FUN_1008e3970("","vdisk",0,"Get parameters failed for deleting image");
    iVar5 = local_5c;
    goto LAB_10058b887;
  }
  FUN_100585d90(&local_68,param_1,plVar12 + 7);
  FUN_100585d90(&local_70,param_1,plVar14 + 7);
  lVar2 = plVar14[6];
  lVar3 = plVar12[6];
  lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 8);
  plVar9 = (long *)0x0;
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 0x10);
  }
  local_5c = (**(code **)(*plVar9 + 0x118))(plVar9,param_1 + 0x68,plVar14 + 6,plVar12 + 6);
  if (local_5c < 0) {
    FUN_1008e3970("","vdisk",0,"Error: can\'t swap images, err 0x%x",local_5c);
    iVar5 = local_5c;
  }
  else {
    FUN_100585d90(&local_78,param_1,plVar14 + 7);
    (**(code **)(*(long *)*param_3 + 0x28))();
    (**(code **)(*(long *)*param_3 + 0x20))();
    *param_3 = 0;
    (**(code **)(*(long *)*param_5 + 0x28))();
    (**(code **)(*(long *)*param_5 + 0x20))();
    *param_5 = 0;
    if ((ulong)*(uint *)(param_3 + 1) != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(param_3 + 1) + *(long *)(param_1 + 0x58);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8)
           = 0;
    }
    if ((ulong)*(uint *)(param_5 + 1) != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(param_5 + 1) + *(long *)(param_1 + 0x58);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8)
           = 0;
    }
    cVar4 = QFile::remove(&local_70);
    if (cVar4 == '\0') {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Failed to remove file %s",local_80 + *(long *)(local_80 + 0x10));
      iVar5 = -0x7ffffd7e;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058b7f7;
        }
        QArrayData::deallocate(local_80,1,8);
      }
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Info: image was removed #1 \'%s\': SUCCESS",
                    local_88 + *(long *)(local_88 + 0x10));
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058b444;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_10058b444:
      cVar4 = QFile::rename(&local_68,&local_78);
      QString::toUtf8();
      lVar1 = *(long *)(local_90 + 0x10);
      QString::toUtf8();
      pcVar10 = "FAILURE";
      if (cVar4 != '\0') {
        pcVar10 = "SUCCESS";
      }
      FUN_1008e3970("","vdisk",0,"Info: image was renamed #1 \'%s\' to \'%s\': %s",local_90 + lVar1,
                    local_98 + *(long *)(local_98 + 0x10),pcVar10);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058b503;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_10058b503:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058b540;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_10058b540:
      if (*(int *)(param_5 + 1) != -1) {
        uVar8 = FUN_100684400(&local_78,(param_6 & 0xff) * 2 + 1,(int)lVar3,&local_5c,param_1);
        uVar7 = (ulong)*(uint *)(param_5 + 1) + *(long *)(param_1 + 0x58);
        *(undefined8 *)
         (*(long *)(*(long *)(param_1 + 0x40) + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8) = uVar8;
      }
      if (local_5c < 0) {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Ooops, can\'t reopen image %s because 0x%x",
                      local_a0 + *(long *)(local_a0 + 0x10),local_5c);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10058b608;
          }
          QArrayData::deallocate(local_a0,1,8);
        }
      }
LAB_10058b608:
      QString::operator=(local_48,&local_68);
      local_4c = (int)lVar2;
      uVar6 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
      plVar9 = (long *)FUN_1006848d0(local_58,uVar6,&DAT_1011bc648,&local_5c,param_1);
      if (plVar9 == (long *)0x0) {
        FUN_1008e3970("","vdisk",0,"Failed to create image. Error 0x%x",local_5c);
        iVar5 = local_5c;
      }
      else {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Info: empty image was created #1 %s",
                      local_a8 + *(long *)(local_a8 + 0x10));
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10058b6c5;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
LAB_10058b6c5:
        if ((ulong)*(uint *)(param_3 + 1) == 0xffffffff) {
          (**(code **)(*plVar9 + 0x28))(plVar9);
          (**(code **)(*plVar9 + 0x20))(plVar9);
          iVar5 = 0;
        }
        else {
          uVar7 = (ulong)*(uint *)(param_3 + 1) + *(long *)(param_1 + 0x58);
          *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8)
               = plVar9;
          iVar5 = 0;
        }
      }
    }
LAB_10058b7f7:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10058b827;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
LAB_10058b827:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058b857;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10058b857:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058b887;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10058b887:
  if (*(int *)local_48[0].field0_0x0 != -1) {
    if (*(int *)local_48[0].field0_0x0 != 0) {
      LOCK();
      *(int *)local_48[0].field0_0x0 = *(int *)local_48[0].field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48[0].field0_0x0 != 0) {
        return iVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48[0].field0_0x0,2,8);
  }
  return iVar5;
}

