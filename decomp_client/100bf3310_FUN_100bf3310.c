
void FUN_100bf3310(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined *)0x0;
    if ((code *)PTR_FUN_102305358 != FUN_100bf3120) {
      puVar1 = PTR_FUN_102305358;
    }
    *param_1 = puVar1;
  }
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = (undefined *)0x0;
    if ((code *)PTR_FUN_102305368 != FUN_100bf3130) {
      puVar1 = PTR_FUN_102305368;
    }
    *param_2 = puVar1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = PTR__free_102305370;
  }
  return;
}

