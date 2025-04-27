#include <stdio.h>
#include <stdbool.h>

int main(){
    
    float base_irpf, salario_liquido, inss, irpf, salario_base, vt, va, base_calc;
    
    
    
    salario_base = 0;
    scanf("%f", &salario_base);
    vt = salario_base * 6 / 100; //vale transporte
    va = 464; // vale alimentacao
    
    
    
    // Inss
    if (salario_base <= 1518){
        inss = salario_base * 7.5 / 100;
    }
    
    
    if (salario_base > 1518 && salario_base <= 2793.88){
        inss = (salario_base * 9 / 100) - 22.77;
    }
    
    
    if (salario_base > 2793.88 && salario_base <= 4190.83){
        inss = (salario_base * 12 / 100) - 106.59;
    }
    
    if (salario_base > 4190.86){
        inss = (salario_base * 14 / 100) - 190.40;
    }
    
    
    
    // irpf
    
    base_irpf = salario_base - inss;
    
    if (base_irpf > 2259.80 && base_irpf <= 2826.65){
        irpf =  (base_irpf* 7.5 / 100) - 169.44 ;
    }
    
    if (base_irpf > 2826.65 && base_irpf <= 3751.05){
       irpf = (base_irpf* 15 / 100) - 381.44;
    }
    
    if (base_irpf > 3751.05 && base_irpf <= 4664.68){
       irpf = (base_irpf* 22.5 / 100) - 662.77;
    }
    
    if (base_irpf > 4664.68){
       irpf = (base_irpf * 27.5 / 100) - 896.00;
    }
    
    
    
    //Calculo final
    
    salario_liquido = salario_base - vt - inss - irpf;
    if(salario_liquido < 1518.00){
      salario_liquido = 1518;
    }
    
    
    
    printf("inss -> %.2f\n", inss);
    printf("irpf -> %.2f\n", irpf);
    printf("salario base -> %.2f\n", salario_base);
    printf("salario liquido -> %.2f\n", salario_liquido);
    
    
    
    
}