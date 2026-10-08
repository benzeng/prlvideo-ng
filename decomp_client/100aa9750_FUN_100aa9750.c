
/* WARNING: Removing unreachable block (ram,0x000100aa98f7) */

undefined8 * FUN_100aa9750(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  QArrayData *pQVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar3 = FUN_100aaabf0(param_2 + 8);
  plVar4 = operator_new(0x20);
  *(undefined4 *)(plVar4 + 1) = 1;
  plVar4[2] = lVar3;
  *plVar4 = (long)&PTR_FUN_102281880;
  plVar4[3] = (long)FUN_100c7cd70;
  if (lVar3 != 0) {
    uVar5 = FUN_100c92690(lVar3);
    iVar2 = FUN_100c96de0(uVar5,400,0xffffffff);
    if (iVar2 == -1) {
      local_48 = (QArrayData *)QString::fromAscii_helper("Missing role attribute",0x16);
      FUN_100a74970(param_2,&local_48);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa99fe;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
    else {
      lVar3 = FUN_100c96d80(uVar5,iVar2);
      if (lVar3 == 0) {
        local_50 = (QArrayData *)QString::fromAscii_helper("Cannot get role attribute",0x19);
        FUN_100a74970(param_2,&local_50);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aa99fe;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
      else {
        lVar3 = FUN_100c96d60(lVar3);
        if (lVar3 != 0) {
          pcVar6 = (char *)FUN_100c8b540(lVar3);
          iVar2 = FUN_100c8b510(lVar3);
          QByteArray::QByteArray((QByteArray *)&local_60,pcVar6,iVar2);
          lVar3 = 0;
          pQVar7 = local_60 + *(long *)(local_60 + 0x10);
          if ((pQVar7 != (QArrayData *)0x0) && (*(uint *)(local_60 + 4) != 0)) {
            lVar3 = 0;
            do {
              if (pQVar7[lVar3] == (QArrayData)0x0) break;
              lVar3 = lVar3 + 1;
            } while ((uint)lVar3 < *(uint *)(local_60 + 4));
          }
          uVar5 = QString::fromAscii_helper((char *)pQVar7,(int)lVar3);
          *param_1 = uVar5;
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100aa9a08;
            }
            QArrayData::deallocate(local_60,1,8);
          }
          goto LAB_100aa9a08;
        }
        local_58 = (QArrayData *)QString::fromAscii_helper("Cannot get role attribute",0x19);
        FUN_100a74970(param_2,&local_58);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aa99fe;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
    }
LAB_100aa99fe:
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_100aa9a08;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("Unable to get peer certifiate",0x1d);
  FUN_100a74970(param_2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aa98e5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100aa98e5:
  *param_1 = PTR_shared_null_1021e1288;
LAB_100aa9a08:
  LOCK();
  plVar1 = plVar4 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}

