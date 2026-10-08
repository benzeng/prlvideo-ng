
void FUN_1000ecee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 local_68;
  Data *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  local_60 = (Data *)PTR_shared_null_1021e15e8;
  local_68 = 0xffffffffffffffff;
  iVar1 = FUN_100a68200(local_58,param_2,param_3,0x24);
  while (iVar1 == 0) {
    iVar1 = FUN_100a683a0(local_58);
    if (iVar1 == 0x200f) {
      uVar2 = FUN_100a68390(local_58);
      lVar6 = FUN_100a68370(local_58);
      if (uVar2 >> 3 != 0) {
        lVar7 = 0;
        do {
          FUN_10009c430(&local_60,lVar6);
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar7 < (long)(ulong)(uVar2 >> 3));
      }
    }
    else if (iVar1 == 0x2010) {
      uVar2 = FUN_100a68390(local_58);
      if (7 < uVar2) {
        puVar5 = (undefined4 *)FUN_100a68370(local_58);
        local_68 = CONCAT44(local_68._4_4_,*puVar5);
      }
    }
    else if (iVar1 == 0x2011) {
      uVar2 = FUN_100a68390(local_58);
      if (7 < uVar2) {
        puVar5 = (undefined4 *)FUN_100a68370(local_58);
        local_68 = CONCAT44(*puVar5,(undefined4)local_68);
      }
    }
    else if (1 < DAT_10230ffd0) {
      uVar3 = FUN_100a683a0(local_58);
      uVar4 = FUN_100a68390(local_58);
      FUN_100df99c0("SGACMD","prl_client_app",2,"Unsupported data skipped, type=%u, size=%u",uVar3,
                    uVar4);
    }
    iVar1 = FUN_100a682f0(local_58);
  }
  FUN_1000cf4a0(*(undefined8 *)(param_1 + 0x10),&local_68,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_60);
  }
  return;
}

