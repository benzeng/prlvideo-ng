
/* Function Stack Size: 0x20 bytes */

void LocationDelegate::locationManager_didUpdateLocations_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_lastObject_102269178);
  local_48[0] = (*(code *)puVar1)(uVar2,PTR_s_coordinate_10226a358);
  (*(code *)puVar1)(uVar2,PTR_s_coordinate_10226a358);
  local_38 = (*(code *)puVar1)(uVar2,PTR_s_horizontalAccuracy_10226a360);
  local_30 = (*(code *)puVar1)(uVar2,PTR_s_altitude_10226a368);
  local_28 = (*(code *)puVar1)(uVar2,PTR_s_verticalAccuracy_10226a370);
  (**(code **)**(undefined8 **)(param_1 + m_callback))
            (*(undefined8 **)(param_1 + m_callback),local_48);
  return;
}

