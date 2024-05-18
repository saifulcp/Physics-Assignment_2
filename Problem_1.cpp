 #include<bits/stdc++.h>
  using namespace std;
  #define P_I  3.1416
  int main()
  {
                     // formula=dsin(θ)=mλ;
       double lambda, theta, d;
        cout << "Enter the wavelength (nm): ";
        cin>>lambda;
         cout << "Enter the angle (degrees): ";
         cin>>theta;
          cout << "Enter the distance between the slits (um): ";
          cin>>d;

            if (lambda < 380 || lambda > 750)    // Check  valid range
            {
        cout << "Out of the range. Please enter a valid number." << endl;
            }

          d=d*1e-6;       // Convert distance from um to meters ;
          lambda=lambda*1e-9;    // Convert wavelength from nm to meters ;
         double theta_rad=theta *(P_I/180.0);   // Convert  degrees to radians

          double M=(d*sin(theta_rad))/lambda;
          int Max_order=M;
          cout<<Max_order<< " -th the maxima order";
          return 0;
  }
