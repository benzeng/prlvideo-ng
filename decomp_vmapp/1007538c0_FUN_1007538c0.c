
undefined1
FUN_1007538c0(undefined8 param_1,long param_2,long param_3,ushort *param_4,void *param_5,
             long param_6,ulong *param_7,undefined1 *param_8)

{
  char cVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 local_7c;
  ulong local_68;
  undefined8 local_50;
  long local_48;
  uint local_40;
  undefined4 uStack_3c;
  
  local_48 = 0;
  local_50 = 0;
  puVar4 = &DAT_1011a1328;
  puVar6 = (undefined *)0x0;
  uVar5 = 0;
  do {
    if ((((uint)*param_4 == puVar4[-2]) && ((uint)param_4[1] == puVar4[-1])) &&
       ((uint)param_4[4] == *puVar4)) {
      puVar6 = &DAT_1011a1310 + uVar5 * 0x24;
      break;
    }
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 9;
  } while (uVar5 < 0x33);
  if (*(short *)(param_2 + 0x220) == 0x40) {
    local_68 = *(ulong *)(param_4 + 0xc);
    uVar7 = 0x10;
    local_7c = 8;
    lVar2 = 0x10;
  }
  else {
    if (*(short *)(param_2 + 0x220) != 0x20) {
      FUN_1008e3970("","dbgdump",0,"unknown bitness: %d");
      return 0;
    }
    local_68 = (ulong)*(uint *)(param_4 + 0xc);
    uVar7 = 8;
    local_7c = 4;
    lVar2 = 8;
  }
  cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_4 + 0x10),
                        &local_40,uVar7);
  uVar5 = 0;
  if (cVar1 != '\0') {
    if (*(short *)(param_2 + 0x220) == 0x20) {
      uVar8 = (ulong)local_40;
    }
    else {
      uVar8 = CONCAT44(uStack_3c,local_40);
    }
    uVar5 = 0;
    if ((uVar8 != 0) &&
       (cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),uVar8,param_5,0x360),
       uVar5 = uVar8, cVar1 != '\0')) goto LAB_100753ae7;
  }
  uVar8 = uVar5;
  cVar1 = FUN_1007533d0(param_1,*(undefined2 *)(param_2 + 0x220),param_3,param_4,param_5,&local_48);
  if (cVar1 == '\0') {
    FUN_1008e3970("","dbgdump",0,"Failed to read Debugger data");
    *(undefined4 *)((long)param_5 + 0x10) = 0;
  }
  else {
    if (local_68 == 0) {
      local_68 = *(ulong *)((long)param_5 + 0x48);
    }
    uVar8 = 0;
    lVar3 = (**(code **)(param_3 + 0x20))(param_3,*(undefined8 *)(param_2 + 0x90),local_68,0);
    if (lVar3 != 0) {
      uVar8 = (local_68 - lVar3) + local_48;
    }
  }
LAB_100753ae7:
  if (puVar6 != (undefined *)0x0) {
    if (param_4[1] < 0xece) {
      *(undefined2 *)((long)param_5 + 700) = *(undefined2 *)(puVar6 + 4);
    }
    if (*(short *)((long)param_5 + 0x2f2) == 0) {
      *(short *)((long)param_5 + 0x2f2) =
           *(short *)((long)param_5 + 700) + (short)*(undefined4 *)(puVar6 + 0xc);
    }
  }
  uVar5 = 0;
  if ((uVar8 != 0) &&
     (lVar3 = (**(code **)(param_3 + 0x20))(param_3,*(undefined8 *)(param_2 + 0x90),uVar8,0),
     uVar5 = uVar8, lVar3 == 0)) {
    FUN_1008e3970("","dbgdump",0,"DbgData=0x%llx is not mapped for current cr3",uVar8);
    cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),
                          lVar2 + param_6 + (ulong)*(ushort *)((long)param_5 + 0x2f2),&local_50,
                          local_7c);
    if (cVar1 == '\0') {
      FUN_1008e3970("","dbgdump",0,"Failed to read new cr3");
      return 0;
    }
    lVar2 = (**(code **)(param_3 + 0x20))(param_3,local_50,local_68,0);
    uVar5 = 0;
    if (lVar2 != 0) {
      uVar5 = (local_68 - lVar2) + local_48;
    }
    lVar2 = (**(code **)(param_3 + 0x20))(param_3,local_50,uVar5,0);
    if (lVar2 == 0) {
      FUN_1008e3970("","dbgdump",0,"Found DbgData=0x%llx is not mapped for new cr3=0x%llx",uVar5,
                    local_50);
      return 0;
    }
    FUN_1008e3970("","dbgdump",0,"Cr3 is changed from 0x%llx to 0x%llx",
                  *(undefined8 *)(param_2 + 0x90),local_50);
    *(undefined8 *)(param_2 + 0x90) = local_50;
    if (param_8 != (undefined1 *)0x0) {
      *param_8 = 1;
    }
  }
  if (*(int *)((long)param_5 + 0x10) != 0x4742444b) {
    FUN_1008e3970("","dbgdump",0,"KdDebuggerDataBlock has wrong tag %#.8lx, expected %#.8lx",
                  *(int *)((long)param_5 + 0x10),0x4742444b);
    FUN_1008e3970("","dbgdump",0,"Debugger data verification failed");
    if (puVar6 == (undefined *)0x0) {
      return 0;
    }
    if (*(void **)(puVar6 + 0x1c) == (void *)0x0) {
      return 0;
    }
    _memcpy(param_5,*(void **)(puVar6 + 0x1c),0x360);
    *(undefined8 *)((long)param_5 + 0x48) = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)((long)param_5 + 0x18) = *(undefined8 *)(param_4 + 8);
  }
  if (param_7 != (ulong *)0x0) {
    *param_7 = uVar5;
  }
  return 1;
}

