
void FUN_100289590(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_2 + 0x88);
  cVar1 = puVar2[0x18];
  if ((cVar1 != -0x60) && (cVar1 != '\x03')) {
    FUN_1004103f0(0x40801,param_2 + 0xc0,0x12,0);
    FUN_100288630(param_1,*puVar2,param_2);
    return;
  }
  FUN_100289480(param_1,param_2);
  return;
}

