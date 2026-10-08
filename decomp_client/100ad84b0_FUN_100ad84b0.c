
void FUN_100ad84b0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  Data *pDVar6;
  QArrayData *local_50;
  undefined8 local_48;
  Data *local_40;
  undefined1 local_31;
  
  cVar3 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar3 != '\0') {
    FUN_100adc210(&local_40);
    if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
      pDVar6 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
      do {
        lVar2 = *(long *)pDVar6;
        uVar5 = *(undefined8 *)(param_1 + 0xf8);
        uVar1 = *(undefined4 *)(lVar2 + 8);
        if ((*(ushort *)(lVar2 + 0x18) & 0x4010) == 0) {
          if (*(int *)(lVar2 + 0x30) - *(int *)(lVar2 + 0x28) < 0x10) {
            bVar4 = false;
          }
          else {
            bVar4 = 0xf < *(int *)(lVar2 + 0x34) - *(int *)(lVar2 + 0x2c);
          }
        }
        else {
          bVar4 = false;
        }
        local_50 = (QArrayData *)QString::fromAscii_helper("",0);
        uVar5 = FUN_100ace6b0(uVar5,uVar1,bVar4,&local_50);
        local_48 = uVar5;
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ad85d7;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100ad85d7:
        *(undefined8 *)(lVar2 + 0x40) = 0;
        *(undefined8 *)(lVar2 + 0x38) = uVar5;
        FUN_100ad1890(param_1,lVar2,&local_48);
        if ((*(int *)(lVar2 + 8) == *(int *)(param_1 + 0x910)) &&
           ((*(char *)(*(long *)(param_1 + 0xa30) + 0x10) != '\0' ||
            (*(char *)(param_1 + 0xaa6) != '\0')))) {
          if ((*(ushort *)(lVar2 + 0x18) & 0x4010) == 0) {
            if (*(int *)(lVar2 + 0x30) - *(int *)(lVar2 + 0x28) < 0x10) {
              bVar4 = false;
            }
            else {
              bVar4 = 0xf < *(int *)(lVar2 + 0x34) - *(int *)(lVar2 + 0x2c);
            }
          }
          else {
            bVar4 = false;
          }
          FUN_100ae31d0(param_1,*(int *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x10),bVar4);
        }
        pDVar6 = pDVar6 + 8;
      } while (pDVar6 != local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_40);
    }
  }
  return;
}

