
QString * FUN_1007a0a60(QString *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int local_6c;
  QArrayData *local_68;
  char local_59;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMetaObject::tr((char *)param_1,PTR_staticMetaObject_1021e1520,0x1e1734f);
  puVar7 = *(uint **)(param_2 + 0x10);
  local_6c = 1;
  if (0 < (int)puVar7[1]) {
    puVar10 = (undefined8 *)(param_2 + 0x10);
    local_6c = 1;
    lVar9 = 0;
    do {
      lVar11 = 0;
      while( true ) {
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(8,8,0,2);
            *puVar10 = puVar7;
          }
          else {
            FUN_1007a20d0(puVar10,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar10;
          }
        }
        if (*(int *)(*(long *)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4)) + 4) <= lVar11)
        break;
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(8,8,0,2);
            *puVar10 = puVar7;
          }
          else {
            FUN_1007a20d0(puVar10,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar10;
          }
        }
        puVar6 = *(uint **)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
        if (1 < *puVar6) {
          puVar1 = (undefined8 *)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
          if ((puVar6[2] & 0x7fffffff) == 0) {
            puVar6 = (uint *)QArrayData::allocate(8,8,0,2);
            *puVar1 = puVar6;
          }
          else {
            FUN_1007a1f40(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
            puVar6 = (uint *)*puVar1;
          }
        }
        if (*(long *)((long)puVar6 + lVar11 * 8 + *(long *)(puVar6 + 4)) != 0) {
          puVar7 = (uint *)*puVar10;
          if (1 < *puVar7) {
            if ((puVar7[2] & 0x7fffffff) == 0) {
              puVar7 = (uint *)QArrayData::allocate(8,8,0,2);
              *puVar10 = puVar7;
            }
            else {
              FUN_1007a20d0(puVar10,puVar7[1],puVar7[2] & 0x7fffffff,0);
              puVar7 = (uint *)*puVar10;
            }
          }
          puVar6 = *(uint **)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
          if (1 < *puVar6) {
            puVar1 = (undefined8 *)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(8,8,0,2);
              *puVar1 = puVar6;
            }
            else {
              FUN_1007a1f40(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar1;
            }
          }
          lVar2 = *(long *)((long)puVar6 + lVar11 * 8 + *(long *)(puVar6 + 4));
          local_48 = (QArrayData *)QString::fromAscii_helper(" ",1);
          iVar4 = QString::indexOf(lVar2 + 0x38,&local_48,0,1);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007a0cf7;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_1007a0cf7:
          if (iVar4 != -1) {
            puVar7 = (uint *)*puVar10;
            if (1 < *puVar7) {
              if ((puVar7[2] & 0x7fffffff) == 0) {
                puVar7 = (uint *)QArrayData::allocate(8,8,0,2);
                *puVar10 = puVar7;
              }
              else {
                FUN_1007a20d0(puVar10,puVar7[1],puVar7[2] & 0x7fffffff,0);
                puVar7 = (uint *)*puVar10;
              }
            }
            puVar6 = *(uint **)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
            if (1 < *puVar6) {
              puVar1 = (undefined8 *)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(8,8,0,2);
                *puVar1 = puVar6;
              }
              else {
                FUN_1007a1f40(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*puVar1;
              }
            }
            QString::mid((int)&local_50,
                         (int)*(undefined8 *)((long)puVar6 + lVar11 * 8 + *(long *)(puVar6 + 4)) +
                         0x38);
            cVar3 = operator==(param_1,&local_50);
            if (*(int *)local_50.field0_0x0 != -1) {
              if (*(int *)local_50.field0_0x0 != 0) {
                LOCK();
                *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
                local_31 = *(int *)local_50.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007a0e09;
              }
              QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
            }
LAB_1007a0e09:
            if (cVar3 != '\0') {
              puVar7 = (uint *)*puVar10;
              if (1 < *puVar7) {
                if ((puVar7[2] & 0x7fffffff) == 0) {
                  puVar7 = (uint *)QArrayData::allocate(8,8,0,2);
                  *puVar10 = puVar7;
                }
                else {
                  FUN_1007a20d0(puVar10,puVar7[1],puVar7[2] & 0x7fffffff,0);
                  puVar7 = (uint *)*puVar10;
                }
              }
              puVar6 = *(uint **)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
              if (1 < *puVar6) {
                puVar1 = (undefined8 *)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
                if ((puVar6[2] & 0x7fffffff) == 0) {
                  uVar8 = QArrayData::allocate(8,8,0,2);
                  *puVar1 = uVar8;
                }
                else {
                  FUN_1007a1f40(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
                }
              }
              puVar7 = (uint *)*puVar10;
              if (1 < *puVar7) {
                if ((puVar7[2] & 0x7fffffff) == 0) {
                  puVar7 = (uint *)QArrayData::allocate(8,8,0,2);
                  *puVar10 = puVar7;
                }
                else {
                  FUN_1007a20d0(puVar10,puVar7[1],puVar7[2] & 0x7fffffff,0);
                  puVar7 = (uint *)*puVar10;
                }
              }
              puVar6 = *(uint **)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
              if (1 < *puVar6) {
                puVar1 = (undefined8 *)((long)puVar7 + lVar9 * 8 + *(long *)(puVar7 + 4));
                if ((puVar6[2] & 0x7fffffff) == 0) {
                  uVar8 = QArrayData::allocate(8,8,0,2);
                  *puVar1 = uVar8;
                }
                else {
                  FUN_1007a1f40(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
                }
              }
              QString::right((int)&local_58);
              iVar5 = QString::toLong((bool *)&local_58,(int)&local_59);
              iVar4 = iVar5 + 1;
              if (local_59 == '\0') {
                iVar4 = local_6c;
              }
              if (iVar5 < local_6c) {
                iVar4 = local_6c;
              }
              local_6c = iVar4;
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007a0ad0;
                }
                QArrayData::deallocate(local_58,2,8);
              }
            }
          }
        }
LAB_1007a0ad0:
        lVar11 = lVar11 + 1;
        puVar7 = (uint *)*puVar10;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)puVar7[1]);
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
  QString::append(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a1032;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007a1032:
  QString::number((int)&local_68,local_6c);
  QString::append(param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return param_1;
}

