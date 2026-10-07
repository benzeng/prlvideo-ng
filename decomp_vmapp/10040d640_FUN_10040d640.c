
undefined8 FUN_10040d640(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = FUN_10040dc10(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x10));
    return uVar1;
  }
  FUN_1008e3970("","PrlAudioCore",0,
                "Lazy stream pbject not intialized yet, unable get volume(float)");
  return 0;
}

