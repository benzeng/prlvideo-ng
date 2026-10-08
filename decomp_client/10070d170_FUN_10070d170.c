
void FUN_10070d170(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined1 local_90 [16];
  Data *local_80;
  Data *local_78;
  Data *local_70;
  int local_68;
  int local_64;
  QDataStream local_60 [24];
  undefined4 local_48;
  QString local_40;
  long local_38 [2];
  undefined1 local_21;
  
  FUN_10070d4e0(&local_40);
  QFile::QFile((QFile *)local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10070d1c8;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10070d1c8:
  cVar2 = QFile::open(local_38,1);
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Can\'t open mouse remaps file for read.");
    goto LAB_10070d3d9;
  }
  QDataStream::QDataStream(local_60,(QIODevice *)local_38);
  local_48 = 0xc;
  QDataStream::operator>>(local_60,&local_64);
  if (local_64 == 0x30232) {
    local_68 = 0;
    QDataStream::operator>>(local_60,&local_68);
    local_70 = (Data *)PTR_shared_null_1021e15e8;
    local_78 = (Data *)PTR_shared_null_1021e15e8;
    local_80 = (Data *)PTR_shared_null_1021e15e8;
    FUN_100713da0(local_60,&local_70);
    FUN_100713da0(local_60,&local_78);
    FUN_100713da0(local_60,&local_80);
    (**(code **)(local_38[0] + 0x70))(local_38);
    iVar5 = *(int *)(local_70 + 0xc) - *(int *)(local_70 + 8);
    if (iVar5 == *(int *)(local_78 + 0xc) - *(int *)(local_78 + 8)) {
      uVar1 = *(uint *)(local_80 + 8);
      iVar3 = *(int *)(local_80 + 0xc);
      if (iVar5 == iVar3 - uVar1) {
        if (0 < iVar5) {
          FUN_100713ea0(param_1 + 0x20);
          uVar1 = *(uint *)(local_80 + 8);
          iVar3 = *(int *)(local_80 + 0xc);
        }
        uVar4 = (ulong)uVar1;
        if ((int)uVar1 < iVar3) {
          lVar6 = 0;
          do {
            FUN_10071be80(local_90,*(undefined4 *)
                                    (local_70 + (*(int *)(local_70 + 8) + lVar6) * 8 + 0x10),
                          *(undefined4 *)(local_80 + ((int)uVar4 + lVar6) * 8 + 0x10),
                          *(undefined4 *)(local_78 + (*(int *)(local_78 + 8) + lVar6) * 8 + 0x10));
            FUN_10055cf40(param_1 + 0x20,local_90);
            lVar6 = lVar6 + 1;
            uVar4 = (ulong)*(int *)(local_80 + 8);
          } while (lVar6 < (long)((long)*(int *)(local_80 + 0xc) - uVar4));
        }
      }
    }
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10070d344;
      }
      QListData::dispose(local_80);
    }
LAB_10070d344:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10070d36a;
      }
      QListData::dispose(local_78);
    }
LAB_10070d36a:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10070d3d0;
      }
      QListData::dispose(local_70);
    }
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"Invalid mouse remaps file format.");
  }
LAB_10070d3d0:
  QDataStream::~QDataStream(local_60);
LAB_10070d3d9:
  QFile::~QFile((QFile *)local_38);
  return;
}

