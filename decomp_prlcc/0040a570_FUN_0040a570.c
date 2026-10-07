
undefined8 FUN_0040a570(void)

{
  undefined *puVar1;
  
  puVar1 = PTR___log_level_0061bd30;
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Service thread started");
  }
  FUN_0040bdf0();
  if (1 < *(int *)puVar1) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Service thread stopped");
  }
  return 0;
}

