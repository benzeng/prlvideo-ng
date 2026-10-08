
undefined8 FUN_1008d8344(long param_1)

{
  undefined8 local_18;
  int local_c;
  
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    *(undefined1 *)((long)&local_18 + (ulong)(byte)(&DAT_101c9ba38)[7 - local_c]) =
         *(undefined1 *)(local_c + param_1);
  }
  return local_18;
}

