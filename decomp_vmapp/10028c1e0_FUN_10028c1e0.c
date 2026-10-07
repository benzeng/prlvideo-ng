
undefined2 FUN_10028c1e0(char *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  long local_858;
  undefined8 local_850;
  undefined4 *local_848;
  undefined4 local_840 [2];
  undefined8 local_838;
  long local_30;
  
  uVar2 = *(uint *)(param_1 + 0x1c) >> 0x18;
  if ((uVar2 & 0x30) == 0x10) {
    pcVar1 = *(code **)(&DAT_1011b8d80 +
                       (ulong)(byte)param_1[0x16] * 8 + ((ulong)(byte)param_1[0x17] & 0xf) * 0x28);
    if (pcVar1 == (code *)0x0) {
      FUN_1008e3970("","LocalDevices",0,"LSI: unsupported page number: 0x%02X");
      uVar3 = 7;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x1c) & 0xffffff;
      if ((uVar2 & 2) == 0) {
        uVar5 = (ulong)*(uint *)(param_1 + 0x20);
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0x20);
      }
      if (uVar4 == 0) {
        uVar3 = 0;
      }
      else {
        local_858 = DAT_1011c3688;
        local_850 = *(undefined8 *)(*(long *)(DAT_1011c3688 + 0x60) + 0x20);
        local_848 = local_840;
        local_840[0] = 0;
        local_838 = 0;
        FUN_10008d820(&local_858,uVar5,uVar4,&local_30);
        if (local_30 == 0) {
          uVar3 = 6;
          FUN_1008e3970("","LocalDevices",0,"LSI: couldn\'t map sg element: 0x%08llX(%u)",uVar5,
                        uVar4);
        }
        else {
          uVar2 = (uint)(byte)param_1[0x15] << 2;
          if (uVar4 <= (uint)(byte)param_1[0x15] << 2) {
            uVar2 = uVar4;
          }
          (*pcVar1)(local_30,uVar2,*param_1 == '\x02');
          uVar3 = 0;
        }
        FUN_10008d470(&local_858);
      }
    }
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"LSI: unsupported sg element: 0x%02X");
    uVar3 = 3;
  }
  return uVar3;
}

