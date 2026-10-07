
void FUN_100593830(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = param_1[2];
  uVar3 = *(uint *)(param_1 + 1) & 0xfc;
  if (uVar3 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 5);
    FUN_1008e3970("","vdisk",0,
                  "Error: OnDioComplete failed: req=%p, req->lba=%llu, foff=%llu, size=%u, dio_err=%u, sys_err=%u, dio_flags=%u"
                  ,lVar2,*(undefined8 *)(lVar2 + 0x10f8),*param_1,*(undefined4 *)(param_1 + 10),
                  uVar3,uVar1,*(uint *)(param_1 + 1));
    FUN_100593e40(lVar2,uVar3,uVar1);
    return;
  }
  FUN_100594070(lVar2);
  return;
}

