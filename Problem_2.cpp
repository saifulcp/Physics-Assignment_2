  #include<bits/stdc++.h>
  using namespace std;
  #define P_I  3.1416

  int main()
  {
      double theta=45.0;     // theta in degrees
      int m=1;    //For the first diffraction minimum
      double theta_rad=theta*(P_I/180.0);      // Convert degrees to radians

                         // formula=asin(θ)=mλ;
                         //    ratio a/λ ;
      double Ratio=m/sin(theta_rad);     //Calculate the ratio of slit width to wavelength
      cout << "The ratio of the slit width to the wavelength is: "<<Ratio;
      return 0;

  }
