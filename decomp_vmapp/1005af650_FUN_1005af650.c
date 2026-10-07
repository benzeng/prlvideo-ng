
undefined1 FUN_1005af650(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  char *pcVar7;
  undefined1 uVar8;
  uint uVar9;
  bool bVar10;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QDir local_58 [8];
  QString local_50;
  QArrayData *local_48;
  int local_3c;
  ulong local_38;
  
  if (*(int *)(param_1 + 6) == -1) {
    (**(code **)(**(long **)*param_1 + 0x178))(&local_60);
    QDir::QDir(local_58,&local_60);
    QDir::dirName();
    QString::operator=((QString *)(param_1 + 2),&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        UNLOCK();
        local_38 = CONCAT71(local_38._1_7_,*(int *)local_50.field0_0x0 != 0);
        if (*(int *)local_50.field0_0x0 != 0) goto LAB_1005af76b;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1005af76b:
    QDir::~QDir(local_58);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        UNLOCK();
        local_38 = CONCAT71(local_38._1_7_,*(int *)local_60.field0_0x0 != 0);
        if (*(int *)local_60.field0_0x0 != 0) goto LAB_1005af7a4;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1005af7a4:
    uVar5 = *param_2;
    param_1[4] = param_2[1];
    param_1[3] = uVar5;
    FUN_1005ae770(&local_68,param_1,param_1 + 3);
    QString::operator=((QString *)(param_1 + 1),&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        UNLOCK();
        local_38 = CONCAT71(local_38._1_7_,*(int *)local_68.field0_0x0 != 0);
        if (*(int *)local_68.field0_0x0 != 0) goto LAB_1005af805;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1005af805:
    *(undefined4 *)(param_1 + 0x14) = param_3;
    puVar1 = param_1 + 5;
    FUN_1007077c0(puVar1,(QString *)(param_1 + 1),param_3,0,0,0);
    if (*(int *)(param_1 + 6) == -1) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Unable to open cache file [%s, 0x%X], err = %u",
                    local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(param_1 + 0x14),
                    *(undefined4 *)((long)param_1 + 0x3c));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 == 0) {
LAB_1005af8e7:
          QArrayData::deallocate(local_70,1,8);
          return 0;
        }
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        local_38 = CONCAT71(local_38._1_7_,*(int *)local_70 != 0);
        if (*(int *)local_70 == 0) goto LAB_1005af8e7;
      }
    }
    else {
      uVar4 = FUN_100708990(puVar1);
      if (uVar4 < 0x1000) {
        uVar5 = FUN_100708990(puVar1);
        FUN_1008e3970("","vdisk",0,"Wrong cache file size %lld (expected %u)",uVar5,0x1000);
      }
      else {
        local_38 = local_38 & 0xffffffff00000000;
        cVar3 = FUN_100707fb0(puVar1,(long)param_1 + 0xa4,0x1000,&local_38,0);
        if ((cVar3 == '\0') || ((int)local_38 != 0x1000)) {
          FUN_1008e3970("","vdisk",0,"Unable to read header (readed %u, expected %u), err = %u",
                        local_38 & 0xffffffff,0x1000,*(undefined4 *)((long)param_1 + 0x3c));
          if (2 < DAT_1011b55f8) {
            pcVar7 = "Unable to read header";
            uVar5 = 3;
            goto LAB_1005af9b8;
          }
        }
        else if (*(long *)((long)param_1 + 0xb4) == 0x6573556e49) {
          pcVar7 = "File wasn\'t closed correctly";
          uVar5 = 0;
LAB_1005af9b8:
          FUN_1008e3970("","vdisk",uVar5,pcVar7);
        }
        else {
          if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
LAB_1005afa10:
            *(int *)(param_1 + 0x216) = *(int *)((long)param_1 + 0xd4);
            uVar9 = *(int *)((long)param_1 + 0xd4) + 0x3fU >> 3 & 0x1ffffff8;
            *(uint *)((long)param_1 + 0x10b4) = uVar9;
            pvVar6 = _valloc((ulong)uVar9);
            param_1[0x217] = pvVar6;
            if (pvVar6 != (void *)0x0) {
              ___bzero(pvVar6,(ulong)uVar9);
              lVar2 = ((ulong)*(uint *)((long)param_1 + 0xcc) - 1) + (ulong)(uVar9 + 0x3000);
              param_1[0x218] = lVar2 - lVar2 % (long)(ulong)*(uint *)((long)param_1 + 0xcc);
              if (DAT_1011b55f8 < 3) {
                return 1;
              }
              QString::toUtf8();
              FUN_1008e3970("","vdisk",3,"Opened [%s]",local_78 + *(long *)(local_78 + 0x10));
              if (*(int *)local_78 == -1) {
                return 1;
              }
              local_48 = local_78;
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                bVar10 = *(int *)local_78 != 0;
                UNLOCK();
                local_38 = CONCAT71(local_38._1_7_,bVar10);
                goto joined_r0x0001005afae7;
              }
              goto LAB_1005af6ea;
            }
            FUN_1008e3970("","vdisk",0,"No memory (%u bytes) for group bitmap",uVar9);
            pcVar7 = "Bitmap init failed";
          }
          else {
            local_38 = 0x6573556e49;
            *(undefined8 *)((long)param_1 + 0xb4) = 0x6573556e49;
            local_3c = 0;
            cVar3 = FUN_1007080a0(puVar1,(long)param_1 + 0xa4,0x1000,&local_3c,0);
            if ((cVar3 != '\0') && (local_3c == 0x1000)) goto LAB_1005afa10;
            FUN_1008e3970("","vdisk",0,
                          "Unable to write \'%s\' header(written %u, expected %u), err = %u",
                          &local_38,local_3c,0x1000,*(undefined4 *)((long)param_1 + 0x3c));
            pcVar7 = "Unable to write \'used\' signature";
          }
          FUN_1008e3970("","vdisk",0,pcVar7);
        }
      }
      FUN_1005afd10(param_1);
    }
    uVar8 = 0;
  }
  else {
    if (DAT_1011b55f8 < 3) {
      return 1;
    }
    QString::toUtf8();
    FUN_1008e3970("","vdisk",3,"Already opened [%s]",local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return 1;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      bVar10 = *(int *)local_48 != 0;
      UNLOCK();
      local_38 = CONCAT71(local_38._1_7_,bVar10);
joined_r0x0001005afae7:
      if (bVar10) {
        return 1;
      }
    }
LAB_1005af6ea:
    uVar8 = 1;
    QArrayData::deallocate(local_48,1,8);
  }
  return uVar8;
}

