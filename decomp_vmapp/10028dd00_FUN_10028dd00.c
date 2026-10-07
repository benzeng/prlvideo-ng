
undefined8 FUN_10028dd00(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = *(undefined8 **)(param_2 + 0x88);
  lVar5 = 8;
  if ((byte)(*(byte *)((long)puVar2 + 5) - 1) < 8) {
    lVar5 = (ulong)*(byte *)((long)puVar2 + 5) - 1;
  }
  FUN_1008e3970("","LocalDevices",0,"[scsi:%d] Task mgmt: %s context:0x%08X",*(undefined1 *)puVar2,
                (&PTR_s_Abort_Task_100bb10f8)[lVar5 * 2],*(undefined4 *)(puVar2 + 6));
  *(undefined8 *)(param_2 + 0x18) = puVar2[2];
  uVar4 = *puVar2;
  *(undefined8 *)(param_2 + 0x10) = puVar2[1];
  *(undefined8 *)(param_2 + 8) = uVar4;
  *(undefined1 *)(param_2 + 10) = 6;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined2 *)(param_2 + 0x16) = 0;
  if (*(char *)((long)puVar2 + 0xc) == '\0') {
    iVar3 = _memcmp((undefined1 *)((long)puVar2 + 0xc),(undefined1 *)((long)puVar2 + 0xd),7);
    uVar4 = CONCAT44(extraout_var,iVar3);
    if (iVar3 == 0) {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x88) + 5);
      lVar5 = 8;
      if ((byte)(bVar1 - 1) < 8) {
        lVar5 = (ulong)bVar1 - 1;
      }
      uVar4 = (*(code *)(&switchD_10028dcf2::switchdataD_100bb10f0)[lVar5 * 2])
                        (param_1,*(undefined4 *)(*(long *)(param_2 + 0x88) + 0x30),param_2 + 0xc);
      return uVar4;
    }
  }
  *(undefined1 *)(param_2 + 0xc) = 9;
  return CONCAT71((int7)((ulong)uVar4 >> 8),1);
}

