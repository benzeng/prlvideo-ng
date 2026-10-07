
void FUN_10075cef0(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                  uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  ulong *puVar4;
  bool bVar5;
  undefined1 local_340 [8];
  uint local_338;
  uint local_2f0;
  undefined1 local_238 [8];
  int local_230;
  int local_1e8;
  short local_140 [30];
  uint local_104;
  long local_c0;
  undefined1 local_b8 [24];
  int local_a0;
  ushort local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_60;
  undefined8 local_58;
  
  local_c0 = 0;
  bVar5 = *(short *)(param_1 + 0x220) != 0x20;
  uVar2 = 0x88;
  if (!bVar5) {
    uVar2 = 0x48;
  }
  cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),param_3,&local_c0);
  if (cVar1 != '\0') {
    puVar3 = (uint *)((ulong)param_6 + param_4);
    puVar4 = (ulong *)((ulong)param_5 + param_4);
    do {
      if (local_c0 == param_3) {
        return;
      }
      cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_c0,local_b8,uVar2);
      if (cVar1 == '\0') {
        return;
      }
      if (*(short *)(param_1 + 0x220) == 0x20) {
        *puVar3 = (uint)(local_8c >> 1);
        cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_88,puVar3 + 1);
        if (cVar1 == '\0') {
          FUN_1008e3970("","dbgdump",0,"Failed to read module name using addr=0x%x",local_88);
        }
        *(undefined2 *)((long)puVar3 + (ulong)*puVar3 * 2 + 4) = 0;
        _memcpy((int *)((long)puVar4 + 4),local_b8,0x48);
        cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_a0,local_140,0x40);
        if (cVar1 == '\0') {
          FUN_1008e3970("","dbgdump",0,"Failed to read module info using addr=0x%x",local_a0);
        }
        else if (local_140[0] == 0x5a4d) {
          cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_104 + local_a0,
                                local_238,0xf8);
          if (cVar1 == '\0') {
            FUN_1008e3970("","dbgdump",0,"Failed to read module NT header info using addr=0x%x",
                          local_104 + local_a0);
          }
          else {
            *(int *)(puVar4 + 9) = local_230;
            *(int *)((long)puVar4 + 0x24) = local_1e8;
          }
        }
        *(int *)puVar4 = (int)puVar3 - (int)param_4;
        puVar4 = (ulong *)((long)puVar4 + 0x4c);
      }
      else {
        *puVar3 = (uint)(local_60 >> 1);
        cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_58,puVar3 + 1);
        if (cVar1 == '\0') {
          FUN_1008e3970("","dbgdump",0,"Failed to read module name using addr=0x%x",local_88);
        }
        *(undefined2 *)((long)puVar3 + (ulong)*puVar3 * 2 + 4) = 0;
        _memcpy(puVar4 + 1,local_b8,0x88);
        cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),CONCAT44(uStack_84,local_88),
                              local_140,0x80);
        if (cVar1 == '\0') {
          FUN_1008e3970("","dbgdump",0,"Failed to read module info using addr=0x%x",local_a0);
        }
        else if (local_140[0] == 0x5a4d) {
          cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),
                                (ulong)local_104 + CONCAT44(uStack_84,local_88),local_340,0x108);
          if (cVar1 == '\0') {
            FUN_1008e3970("","dbgdump",0,"Failed to read module NT header info using addr=0x%x",
                          local_104 + local_a0);
          }
          else {
            puVar4[0x11] = (ulong)local_338;
            puVar4[9] = (ulong)local_2f0;
          }
        }
        *puVar4 = (ulong)(uint)((int)puVar3 - (int)param_4);
        puVar4 = puVar4 + 0x12;
      }
      puVar3 = (uint *)((long)puVar3 + ((ulong)*puVar3 * 2 + 0xd & 0x3fffffff8));
      cVar1 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_c0,&local_c0,
                            bVar5 * '\x04' + '\x04');
    } while (cVar1 != '\0');
  }
  return;
}

