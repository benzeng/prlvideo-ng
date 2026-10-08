
int FUN_100b71740(long param_1,QString *param_2,int param_3,undefined8 param_4,undefined1 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  QString local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  undefined1 local_168 [16];
  char local_158;
  QArrayData *local_a8;
  undefined1 local_31;
  
  local_170 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b60470(local_168,&local_170);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b717cb;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100b717cb:
  local_178 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar2 = FUN_100b6fcb0(local_168,&local_178);
  if (-1 < iVar2) {
    if (local_158 == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x1d3,"GetKeyNumber");
    }
    local_180.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    cVar1 = operator==(param_2,&local_180);
    if (*(int *)local_180.field0_0x0 != -1) {
      if (*(int *)local_180.field0_0x0 != 0) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
        local_31 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b718a9;
      }
      QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    }
LAB_100b718a9:
    if (cVar1 == '\0') {
      FUN_100df99c0("","License",0,"Error: wrong license key number");
      iVar2 = -0x7ffeefcd;
    }
    else {
      uVar5 = *(int *)(param_1 + 0x120) - 1;
      iVar2 = 0;
      if ((uVar5 < 8) && ((0xf9U >> (uVar5 & 0x1f) & 1) != 0)) {
        iVar3 = FUN_100b93cc0(*(int *)(param_1 + 0x120),&DAT_102314290);
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x124) = 1;
          iVar3 = FUN_100b71130();
          if (iVar3 == 0) {
            iVar3 = FUN_100b71bb0(param_1,*(undefined4 *)(&DAT_101cdc180 + (long)(int)uVar5 * 4),
                                  param_3,param_3 == 1,param_5);
            if (iVar3 == 0) {
              iVar3 = FUN_100b6fcb0(param_1,&local_178);
              iVar2 = 0;
              if (-1 < iVar3) {
                iVar2 = iVar3;
              }
              if (param_3 != 2) {
                iVar2 = iVar3;
              }
              goto LAB_100b71941;
            }
            uVar4 = FUN_100b9d570();
            FUN_100df99c0("","License",0,"Couldn\'t update/reset active license, %s",uVar4);
          }
          else {
            uVar4 = FUN_100b9d570();
            FUN_100df99c0("","License",0,"Can\'t set proxy info  %s",uVar4);
          }
        }
        else {
          uVar4 = FUN_100b9d570();
          FUN_100df99c0("","License",0,"Can\'t initialize vzlic library %s",uVar4);
        }
        iVar2 = -0x7ffef000;
        if (iVar3 + 0x12U < 0x1a) {
          iVar2 = *(int *)(&DAT_101cdc110 + (long)(int)(iVar3 + 0x12U) * 4);
        }
      }
    }
  }
LAB_100b71941:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b71977;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100b71977:
  FUN_100b663d0(local_168);
  return iVar2;
}

