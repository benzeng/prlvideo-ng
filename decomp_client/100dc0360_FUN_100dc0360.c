
QString * FUN_100dc0360(QString *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  char *pcVar7;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_58 = (int *)*param_2;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar6 = local_58 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  piVar6 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_50 = piVar6;
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      local_60 = (QArrayData *)PTR_shared_null_1021e1288;
      local_50 = piVar6;
      cVar3 = FUN_100dc0bd0(piVar6,&local_60,60000,0,0);
      local_78 = (QArrayData *)QString::fromAscii_helper("\n======= %1%2 =======\n",0x16);
      pcVar7 = "FAILED: ";
      if (cVar3 != '\0') {
        pcVar7 = "";
      }
      local_80 = (QArrayData *)QString::fromAscii_helper(pcVar7,(uint)(cVar3 == '\0') << 3);
      QString::arg(&local_70,&local_78,&local_80,0,0x20);
      QString::arg(&local_68,&local_70,piVar6);
      QString::append(param_1);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100dc0509;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100dc0509:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100dc0539;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100dc0539:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100dc0569;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100dc0569:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100dc0599;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100dc0599:
      QString::append(param_1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100dc05d5;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100dc05d5:
      piVar6 = local_50 + 2;
      local_50 = piVar6;
    } while (piVar6 != local_48);
  }
  local_40 = 1;
  FUN_100039a80(&local_58);
  return param_1;
}

