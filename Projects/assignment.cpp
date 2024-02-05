#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Sensor
{
public:
    string type;
    vector<double> readings;

    Sensor(string t) : type(t) {}

    void addReading(string filename)
    {
        ifstream file(filename);

        double reading;
        while (file >> reading)
        {
            readings.push_back(reading);
        }
    }
};
class Analysis      //another class to analysis data
{
public:

    double calculateAvg(vector<double>& numbers)   //&-reference to a vector of reference to a vector of double type, directly modifies, no copy
    {
        double sum = 0;
        for (double n : numbers)   //each of the readings
        {
            sum += n;
        }
        return sum / numbers.size();
    }

    double getMinimum(vector<double>& numbers)
    {
        double minVal = numbers[0];
        for (double n : numbers)
        {
            if (n < minVal)
                minVal = n;
        }
        return minVal;
    }

    double getMaximum(const vector<double>& numbers)
    {
        double maxVal = numbers[0];
        for (double n : numbers)
        {
            if (n > maxVal)
                maxVal = n;
        }
        return maxVal;
    }
};

int main()
{

    Sensor temper("Temperature"), humid("Humidity"), airQuality("Air Quality");

    temper.addReading("temperature.txt");
    humid.addReading("humidity.txt");
    airQuality.addReading("qualityofair.txt");

    Analysis anls;
    cout<<"=============Welcome to Daily Environmental Statistics=============="<<endl;
    cout<<"********************************************************************"<<endl;

    cout<<" Here you may find the country's weather statistics using 8 different regions' data"<<endl<<endl;

    cout << "Temperature Average: " << anls.calculateAvg(temper.readings) << endl;
    cout<<"Maximum Temperature : " << anls.getMaximum(temper.readings) << endl;
    cout<<"Minimum Temperature : " << anls.getMinimum(temper.readings) << endl<<endl;


    cout << "Humidity Average: " << anls.calculateAvg(humid.readings) << endl;
    cout<<"Maximum Humidity: " << anls.getMaximum(humid.readings) << endl;
    cout<<"Minimum Humidity: " << anls.getMinimum(humid.readings) <<endl<< endl;

    cout << "Air Quality Average of the country: " << anls.calculateAvg(airQuality.readings) << endl;
    cout << "Air Quality Max(Most Pollution): " << anls.getMaximum(airQuality.readings) << endl;
    cout << "Air Quality MINIMUM(Cleanest): " << anls.getMinimum(airQuality.readings)<<endl << endl;

    cout<<"SUMMARY TEXT SAVED SUCCESSFULLY"<<endl;



    ofstream     outfile("AtaGlance.txt");

    outfile<<"=============Welcome to Daily Environmental Statistics=============="<<endl;
    outfile<<"********************************************************************"<<endl;

    outfile<<" Here you may find the country's weather statistics using 8 different regions' data"<<endl<<endl;

    outfile<< "Temperature Average: " << anls.calculateAvg(temper.readings) << endl;
    outfile<<"Maximum Temperature : " << anls.getMaximum(temper.readings) << endl;
    outfile<<"Minimum Temperature : " << anls.getMinimum(temper.readings) << endl<<endl;


    outfile<< "Humidity Average: " << anls.calculateAvg(humid.readings) << endl;
    outfile<<"Maximum Humidity: " << anls.getMaximum(humid.readings) << endl;
    outfile<<"Minimum Humidity: " << anls.getMinimum(humid.readings) <<endl<< endl;

    outfile<< "Air Quality Average of the country: " << anls.calculateAvg(airQuality.readings) << endl;
    outfile<< "Air Quality Max(Most Pollution): " << anls.getMaximum(airQuality.readings) << endl;
    outfile<< "Air Quality MINIMUM(Cleanest): " << anls.getMinimum(airQuality.readings)<<endl << endl;

    return 0;
}

