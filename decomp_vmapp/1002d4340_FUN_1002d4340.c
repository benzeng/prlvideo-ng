
void FUN_1002d4340(long param_1)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint *local_38;
  
  if (1 < DAT_1011c568c) {
    lVar1 = *(long *)(param_1 + 0x40);
    FUN_1008e3970("","USB",0,
                  "[XHC] (USBCMD:%08x USBSTS:%08x PGSZ:%08x CRCR:%08x%08x DCBA:%08x%08x CONFIG:%08x)"
                  ,*(undefined4 *)(lVar1 + 0x80),*(undefined4 *)(lVar1 + 0x84),
                  *(undefined4 *)(lVar1 + 0x88),(int)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20),
                  (int)*(undefined8 *)(lVar1 + 0x98),
                  (int)((ulong)*(undefined8 *)(lVar1 + 0xb0) >> 0x20),
                  (int)*(undefined8 *)(lVar1 + 0xb0),*(undefined4 *)(lVar1 + 0xb8));
    if (1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC] EVENT RING STATE:");
    }
  }
  puVar2 = (uint *)(param_1 + 0x14e4);
  uVar3 = 0;
  do {
    uVar4 = *(ulong *)(puVar2 + -5);
    if ((uVar4 != 0) && (1 < DAT_1011c568c)) {
      FUN_1008e3970("","USB",0,"[XHC][ER%d] (EP:%08x%08x SEG_IDX:%d SEG_CNT:%d C:%d EDTLA:%d CC:%d)"
                    ,uVar3 & 0xffffffff,uVar4 >> 0x20,(int)uVar4,puVar2[-3],puVar2[-2],
                    (byte)puVar2[-1] & 1,*puVar2 & 0xffffff,*puVar2 >> 0x18);
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 10;
  } while (uVar3 != 8);
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[XHC] SLOT STATE:");
  }
  local_38 = (uint *)(param_1 + 0x1624);
  uVar3 = 0;
  do {
    if ((uVar3 == 0) || (*(long *)(param_1 + 0x1b10 + uVar3 * 0x510) != 0)) {
      uVar4 = 0;
      puVar2 = local_38;
      if (1 < DAT_1011c568c) {
        uVar4 = *(ulong *)(param_1 + 0x1b10 + uVar3 * 0x510);
        FUN_1008e3970("","USB",0,"[XHC][SLOT%d] (BASE:%08x%08x RH_PORT_ID:%d)",uVar3 & 0xffffffff,
                      uVar4 >> 0x20,(int)uVar4,*(undefined1 *)(param_1 + 0x1b18 + uVar3 * 0x510));
        uVar4 = 0;
      }
      do {
        lVar1 = *(long *)(puVar2 + -5);
        if ((lVar1 != 0) && (1 < DAT_1011c568c)) {
          FUN_1008e3970("","USB",0,
                        "[XHC][SLOT%d][RING%d] (EP:%08x%08x SEG_IDX:%d SEG_CNT:%d C:%d EDTLA:%d CC:%d)"
                        ,uVar3 & 0xffffffff,uVar4 & 0xffffffff,(int)((ulong)lVar1 >> 0x20),
                        (int)lVar1,puVar2[-3],puVar2[-2],(byte)puVar2[-1] & 1,*puVar2 & 0xffffff,
                        *puVar2 >> 0x18);
        }
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 10;
      } while (uVar4 != 0x20);
    }
    uVar3 = uVar3 + 1;
    local_38 = local_38 + 0x144;
  } while (uVar3 != 0x21);
  return;
}

