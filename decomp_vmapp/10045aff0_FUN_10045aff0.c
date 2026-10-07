
ulong FUN_10045aff0(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined4 local_3c;
  
  uVar4 = 0xffffffb8;
  if (param_3 < 6) {
    bVar9 = param_2 != 8;
    if (!bVar9) {
      param_3 = 0;
    }
    cVar1 = bVar9 * '\x02' + '\x01';
    switch(param_3) {
    case 2:
      local_3c = 0xff;
      cVar8 = '\x01';
      cVar1 = '\x01';
      break;
    case 3:
      local_3c = 0xff;
      cVar8 = '\x01';
      break;
    case 4:
      cVar8 = '\x01';
      local_3c = 0x3f;
      break;
    case 5:
      cVar8 = '\x01';
      local_3c = 0xf;
      break;
    default:
      local_3c = 0xff;
      cVar8 = bVar9 + '\x01';
    }
    iVar3 = FUN_10044df20(param_2);
    uVar4 = 0xffffff9d;
    if (-1 < iVar3) {
      uVar4 = FUN_10045b450(param_1 + 0x10,cVar1,local_3c,param_4,0,0,0,0);
      if (-1 < (int)uVar4) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x1a) = 0;
        param_1[0x1c] = 0x20;
        puVar2 = PTR_PTR_100ba23a8;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x1e) = 0;
        *(undefined8 *)(param_1 + 0xe) =
             *(undefined8 *)(puVar2 + (long)iVar3 * 8 + (long)(int)param_3 * 0x30);
        if (param_3 - 3 < 3) {
          pcVar5 = FUN_10045b1d0;
        }
        else if (cVar8 == '\x01') {
          pcVar5 = FUN_10045b270;
        }
        else {
          pcVar5 = FUN_10045b2e0;
        }
        *(code **)(param_1 + 10) = pcVar5;
        lVar6 = FUN_10045b8a0(param_1 + 0x10,cVar8);
        *(long *)(param_1 + 0xc) = lVar6;
        uVar7 = 0;
        if (*(long *)(param_1 + 0xe) == 0) {
          uVar7 = 0xffffff78;
        }
        if (lVar6 == 0) {
          uVar7 = 0xffffff78;
        }
        uVar4 = (ulong)uVar7;
      }
    }
  }
  return uVar4;
}

