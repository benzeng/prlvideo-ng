
undefined8 FUN_10041c4c0(long param_1,undefined8 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint *local_58;
  char local_49;
  QArrayData *local_48;
  uint *local_40;
  undefined1 local_31;
  
  QByteArray::split((char)&local_40);
  _memset_pattern16(param_3,&DAT_100b41d70,0x80);
  if ((int)local_40[2] < (int)local_40[3]) {
    lVar8 = 0;
    do {
      if (1 < *local_40) {
        FUN_100050940(&local_40,local_40[1]);
      }
      local_48 = *(QArrayData **)(local_40 + ((int)local_40[2] + lVar8) * 2 + 4);
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
      }
      local_49 = '\0';
      QByteArray::split((char)&local_58);
      if (1 < *local_58) {
        FUN_100050940(&local_58,local_58[1]);
      }
      iVar2 = qstrcmp((QByteArray *)(local_58 + (long)(int)local_58[2] * 2 + 4),"s");
      uVar6 = 2;
      if (iVar2 == 0) {
LAB_10041c640:
        uVar3 = local_58[2];
        uVar4 = local_58[3];
        if (uVar4 - uVar3 == 1) {
          iVar2 = *(int *)(param_1 + 0x9c);
          lVar5 = 0;
          if (0 < iVar2) {
            do {
              if (*(int *)((long)param_3 + lVar5 * 4) == 8) {
                *(undefined4 *)((long)param_3 + lVar5 * 4) = uVar6;
                iVar2 = *(int *)(param_1 + 0x9c);
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < iVar2);
            uVar3 = local_58[2];
            uVar4 = local_58[3];
          }
        }
        bVar1 = false;
        if (uVar4 - uVar3 == 2) {
          if (1 < *local_58) {
            FUN_100050940(&local_58,local_58[1]);
            uVar3 = local_58[2];
          }
          iVar2 = QByteArray::toInt((bool *)(local_58 + (long)(int)uVar3 * 2 + 6),(int)&local_49);
          bVar1 = true;
          if (((0 < iVar2) && (local_49 != '\0')) && (iVar2 <= *(int *)(param_1 + 0x9c))) {
            *(undefined4 *)((long)param_3 + (long)(iVar2 + -1) * 4) = uVar6;
            bVar1 = false;
          }
        }
      }
      else {
        if (1 < *local_58) {
          FUN_100050940(&local_58,local_58[1]);
        }
        iVar2 = qstrcmp((QByteArray *)(local_58 + (long)(int)local_58[2] * 2 + 4),"S");
        if (iVar2 == 0) goto LAB_10041c640;
        if (1 < *local_58) {
          FUN_100050940(&local_58,local_58[1]);
        }
        iVar2 = qstrcmp((QByteArray *)(local_58 + (long)(int)local_58[2] * 2 + 4),"c");
        uVar6 = 4;
        if (iVar2 == 0) goto LAB_10041c640;
        if (1 < *local_58) {
          FUN_100050940(&local_58,local_58[1]);
        }
        iVar2 = qstrcmp((QByteArray *)(local_58 + (long)(int)local_58[2] * 2 + 4),"C");
        bVar1 = true;
        if (iVar2 == 0) goto LAB_10041c640;
      }
      FUN_1000506b0(&local_58);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10041c729;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_10041c729:
      uVar7 = 0;
      if (bVar1) goto LAB_10041c75a;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (long)(int)local_40[3] - (long)(int)local_40[2]);
    uVar7 = 1;
  }
  else {
    uVar7 = 1;
  }
LAB_10041c75a:
  FUN_1000506b0(&local_40);
  return uVar7;
}

