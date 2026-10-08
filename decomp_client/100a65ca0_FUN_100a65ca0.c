
void FUN_100a65ca0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_LocationDelegate_10226aaa8,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_initWithCallback__10226a390,param_2);
  *param_1 = uVar2;
  return;
}

